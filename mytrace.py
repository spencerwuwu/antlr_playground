#!/usr/bin/env python3

#import functools
import json
import subprocess
import sys

import tqdm

from archr.targets import DockerImageTarget  # type: ignore
from archr.analyzers import QEMUTracerAnalyzer  # type: ignore
from archr.analyzers.qemu_tracer import QEMUBBLTrace  # type: ignore


def single_trace(image_id: str, full_test_input):
    with DockerImageTarget(image_id).build().start() as target:
        tracer: QEMUTracerAnalyzer = QEMUTracerAnalyzer(target)
        tracer.nock()
        for prefix in tqdm.tqdm([full_test_input], desc="Executing test_inputs"):
            fire_result: QEMUBBLTrace = tracer.fire(testcase=prefix).trace
            block_trace: list[int] = [fire_result[i] for i in range(len(fire_result))]
    return block_trace


def trace_block(image_id: str, labelled_test_inputs: list[tuple[str, bytes]],
                      full_bcov=[]):
    labels, test_inputs = map(list, zip(*labelled_test_inputs))

    block_sets:list[set[int]] = []

    with DockerImageTarget(image_id).build().start() as target:
        tracer: QEMUTracerAnalyzer = QEMUTracerAnalyzer(target)
        tracer.nock()
        for prefix in tqdm.tqdm(test_inputs, desc="Executing test_inputs"):
            fire_result: QEMUBBLTrace = tracer.fire(testcase=prefix).trace
            block_trace: list[int] = [fire_result[i] for i in range(len(fire_result))]
            #edge_sets.append(set(zip(block_trace, block_trace[1:])))
            block_sets.append(set(block_trace))

    blocks_seen = set()
    #labelled_blocks: set[int] = set()
    prefix_covs: list[set[int]] = []

    for i, (block_set, prefix, label) in enumerate(zip(block_sets, test_inputs, labels)):
        prefix_covs.append(set())
        if len(prefix) > 0:
            #for block in functools.reduce(set.__and__, block_sets[i:]) - blocks_seen:
            #    # - This is the first time we've seen this block
            #    # - This block appears in all subsequent block sets
            for block in block_sets[i] - blocks_seen:
                # - This is the first time we've seen this block
                # - This block appears in 'fully valid' block sets
                if block in full_bcov:
                    #labelled_blocks.add(block)
                    prefix_covs[i].add(block)
            #print(f"idx: {i:3d}, len: {len(test_inputs[i]):5d}, inc: {len(prefix_covs[i]):5d}, input: {test_inputs[i]}")
        blocks_seen |= block_set

    return test_inputs, prefix_covs


def trace_block_counts(test_inputs, prefix_covs):
    len_input = [len(s) for s in test_inputs]
    len_prefix = [0]
    for i in range(1, len(prefix_covs)):
        len_prefix.append(len_prefix[-1] + len(prefix_covs[i]))

    return len_input, len_prefix



#RULE_NAMES: list[str] = ["scheme", "user", "password", "host", "port", "path", "query", "frag"]
#intermediate_result: str = ""
#
#def walk(pt: dict, result: list[bytes] | None = None, rules: list[str] | None = None, depth: int = 0):
#    global intermediate_result
#    if result is None:
#        result = []
#    if rules is None:
#        rules = []
#
#    text: str = pt['text'].rstrip("<EOF>")
#
#    if "ruleName" in pt:
#        rule_name: str = pt['ruleName']
#        if rule_name in RULE_NAMES:
#            rules.append(rule_name)
#            if len(result) == 0:
#                result.append(intermediate_result.encode("latin1"))
#            else:
#                result.append(result[-1] + intermediate_result.encode("latin1"))
#
#            intermediate_result = ""
#    else:
#        # Terminal
#        intermediate_result += text
#
#    if "children" in pt:
#        for child in pt["children"]:
#            walk(child, result, rules, depth + 1)
#
#    if depth == 0:
#        result.append(text.encode("latin1"))
#        return list(zip([""] + rules, result))


def walk_terminals(pt):
    def dfs(node):
        if node["type"] == "terminal":
            return [node["text"].encode("latin1")]
        ret = []
        for child in node["children"]:
            ret += dfs(child)
        return ret
    test_inputs = []
    terminals = dfs(pt)
    for i in range(len(terminals)):
        test_inputs.append((f"terminal_{i}", b"".join(terminals[:i])))
    return test_inputs



def get_naive_prefix(data: bytes):
    prefixes = []
    for i in range(len(data)+1):
        prefixes.append((f"naive_{i}", data[:i]))
    return prefixes


def compare_b2b(prefix_inputs, prefix_covs, byte_inputs, byte_covs):
    len_input = [len(s) for s in prefix_inputs]

    prev_prefix_inc_idx = 0
    for idx, input_len in enumerate(len_input):
        if idx == 0:
            continue

        if len(prefix_covs[idx]) == 0:
            print(f"x  Prefix @{input_len:5d} xxx      : ->", prefix_inputs[idx][-50:])
        else:
            pre_inc_len = len(prefix_inputs[prev_prefix_inc_idx])

            print(f"+  Prefix @{input_len:5d} inc {len(prefix_covs[idx]):5d}: ->", prefix_inputs[idx][-50:])

            byte_incs = [byte_idx for byte_idx in range(pre_inc_len+1, input_len+1) if len(byte_covs[byte_idx]) > 0]

            for byte_idx in byte_incs:
                print(f"   - Byte @{byte_idx:5d} inc {len(byte_covs[byte_idx]):5d}:   ",  byte_inputs[byte_idx][-50:])
            prev_prefix_inc_idx = idx


def handle_single(pt, docker_image_id):
    terminal_inputs = walk_terminals(pt)
    full_input = terminal_inputs[-1][1]
    naive_inputs = get_naive_prefix(full_input)

    single_bcov = single_trace(docker_image_id, full_input)

    naive_in, naive_covs = trace_block(docker_image_id, naive_inputs, single_bcov)

    prefix_in, prefix_covs = trace_block(docker_image_id, terminal_inputs, single_bcov)

    print()
    print("--", docker_image_id)

    compare_b2b(prefix_in, prefix_covs, naive_in, naive_covs)

    print()

    return naive_in, naive_covs, prefix_in, prefix_covs


def handle_dual(pt, docker_image_a, docker_image_b, outdir=None, outname=None):

    naive_in_a, naive_covs_a, prefix_in_a, prefix_covs_a = handle_single(pt, docker_image_a)

    naive_in_b, naive_covs_b, prefix_in_b, prefix_covs_b = handle_single(pt, docker_image_b)

    print()
    print("+++++++++++++++++++")
    print("++++++ Cross ++++++")
    print("+++++++++++++++++++")
    print()
    print(f"{docker_image_a:30s} {docker_image_b:30s}")
    for idx, prefix_cov in enumerate(zip(prefix_covs_a, prefix_covs_b)):
        if idx == 0:
            continue
        def get_len_text(value):
            if value == 0:
                return "  -  "
            else:
                return f"+{value:4d}"
        prefix_cov_a, prefix_cov_b = prefix_cov
        len_a = get_len_text(len(prefix_cov_a))
        len_b = get_len_text(len(prefix_cov_b))
        print(f"{len_a:30s} {len_b:30s} {prefix_in_a[idx][-50:]}")

    if outdir is not None and outname is not None:
        result = {"parsed_tokens": [s.decode() for s in prefix_in_a],
                  "results": [
                  {"name": docker_image_a,
                   "byte_covs": [list(s) for s in naive_covs_a],
                   "prefix_covs": [list(s) for s in prefix_covs_a]
                   },
                  {"name": docker_image_b,
                   "byte_covs": [list(s) for s in naive_covs_b],
                   "prefix_covs": [list(s) for s in prefix_covs_b]
                   },
                  ]
                  }
        fname = outname.split(".")[0]
        with open(f"{outdir}/{fname}.json", "w") as fd:
            json.dump(result, fd, indent=2) 


if __name__ == "__main__":

    if len(sys.argv) == 2:
        docker_image_id = sys.argv[1]

        with open("/dev/stdin") as f:
            j: dict = json.load(f)
        pt: dict = j["parse_tree"]

        handle_single(pt, docker_image_id)

    elif len(sys.argv) == 3:
        docker_image_a = sys.argv[1]
        docker_image_b = sys.argv[2]

        with open("/dev/stdin") as f:
            j: dict = json.load(f)
        pt: dict = j["parse_tree"]

        handle_dual(pt, docker_image_a, docker_image_b)

    elif len(sys.argv) == 5:
        docker_image_a = sys.argv[1]
        docker_image_b = sys.argv[2]
        outdir = sys.argv[3]
        outname = sys.argv[4]

        with open("/dev/stdin") as f:
            j: dict = json.load(f)
        pt: dict = j["parse_tree"]

        handle_dual(pt, docker_image_a, docker_image_b, outdir, outname)

    else:
        print(f"Usage: python3 {sys.argv[0]} <docker_image_id> {{docker_image_id_b}}")
        print(f"    (Reads ANTLR JSON from stdin)")
        exit(1)


