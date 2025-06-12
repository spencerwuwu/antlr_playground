#!/bin/bash
set -o errexit

antlr4 -Dlanguage=Cpp -listener -visitor url.g4 -o generated
