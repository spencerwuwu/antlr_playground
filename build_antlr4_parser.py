#!/usr/bin/env python3
import os
import sys
import shutil
import argparse
from subprocess import Popen, PIPE

from jinja2 import Environment, FileSystemLoader
from loguru import logger
logger.remove(0)
logger.add(sys.stderr, level="INFO")

SETTINGS = {
        "html": {
            "grammar_files": ["HTMLLexer.g4", "HTMLParser.g4"],
            "target_lexer": "HTMLLexer",
            "target_parser": "HTMLParser",
            "target_base": "HTMLParser",
            "start_rule": "htmlDocument"
            },
        "url": {
            "grammar_files": ["url.g4"],
            "target_lexer": "urlLexer",
            "target_parser": "urlParser",
            "target_base": "url",
            "start_rule": "url"
            },
        "json": {
            "grammar_files": ["JSON.g4"],
            "target_lexer": "JSONLexer",
            "target_parser": "JSONParser",
            "target_base": "JSON",
            "start_rule": "json"
            }
        }

# Loading Jinja modules and templates
jinja_env = Environment(loader = FileSystemLoader('jinja_templates'))


def syn_parser(workdir, target, setting):
    workdir = f"{workdir}/{target}"

    if os.path.exists(workdir):
        shutil.rmtree(workdir, ignore_errors=True)
    os.makedirs(workdir)

    # Generate cpp files for target
    logger.info(f"Generate cpp file for {target}")

    grammar_files = " ".join(setting["grammar_files"])
    cmd = f"cd grammars-v4/{target}/ && antlr4 -Dlanguage=Cpp -listener -visitor -o {os.getcwd()}/{workdir}/generated {grammar_files}"

    logger.debug(f"Cmd: {cmd}")
    p = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE)
    out, err = p.communicate()
    if p.returncode != 0:
        print(err.decode())
        exit(1)

    # Creating driver and CMakeLists.txt
    main_temp = jinja_env.get_template('main.cpp')
    with open(f"{workdir}/main.cpp", "w") as fd:
        fd.write(main_temp.render(target_lexer=setting["target_lexer"], 
                                  target_parser=setting["target_parser"],
                                  target_base=setting["target_base"],
                                   start_rule=setting["start_rule"]))

    cmake_temp = jinja_env.get_template('CMakeLists.txt')
    with open(f"{workdir}/CMakeLists.txt", "w") as fd:
        fd.write(cmake_temp.render(target=target,
                                   target_lexer=setting["target_lexer"], 
                                   target_parser=setting["target_parser"],
                                   target_base=setting["target_base"]
                                  ))

    # Compile the code, move the binary here
    logger.info(f"Compiling antlr4 cpp runtime for {target}")

    cmd = f"cd {workdir} && mkdir build && cd build && cmake ../ && make"
    logger.debug(f"Cmd: {cmd}")
    p = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE)
    out, err = p.communicate()
    if p.returncode != 0:
        print(err.decode())
        exit(1)
    
    cmd = f"mv {workdir}/build/antlr4-{target} ."
    p = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE)
    out, err = p.communicate()
    if p.returncode != 0:
        print(err.decode())
        exit(1)

    logger.info("Done building antlr4-{target}!")



def main():
    parser = argparse.ArgumentParser(description="Create antlr4 parser for a given grammar in cpp that parses an input to tokens + parse_tree in json format")
    parser.add_argument('--workdir', type=str, default="_workdir", help='Path to the working directory for generated files')
    parser.add_argument('target', type=str, help='Target grammar to generate for')

    args = parser.parse_args()

    target = args.target
    if args.target not in SETTINGS:
        print("Only tested on ", " ".join(SETTINGS))
        exit(1)

    if not os.path.exists(args.workdir):
        os.makedirs(args.workdir)

    syn_parser(args.workdir, target, SETTINGS[target])


if __name__ == '__main__':
    main()
