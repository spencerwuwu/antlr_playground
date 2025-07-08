#!/bin/bash -ex

rm -rf exp/json && mkdir -p exp/json/data exp/json/out

for f in grammars-v4/json/examples/*; do
    bn=$(basename "$f")
    cat "$f" | ./antlr4-json | python3 mytrace.py archr/json_c archr/nlohmann_json exp/json/data $bn > exp/json/out/${bn}
done
