#!/bin/bash -ex

rm -rf exp/url && mkdir -p exp/url/data exp/url/out

for f in grammars-v4/url/examples/*; do
    bn=$(basename "$f")
    cat "$f" | ./antlr4-url | python3 mytrace.py archr/curl_url archr/apr_uri_parse exp/url/data $bn > exp/url/out/${bn}
done
