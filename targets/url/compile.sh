#!/bin/bash
set -o errexit
GFILE=$1

antlr4 -Dlanguage=Cpp -listener -visitor $GFILE -o generated

rm -rf build
mkdir build
cd build
cmake ../
make
