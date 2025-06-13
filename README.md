# antlr_playground

## Installation
1. Install required python packages `pip install -r requirements.txt`
2. Build antlr4 cpp runtime
```bash
cd deps/antlr4/runtime/Cpp
mkdir build
cd build
cmake ../
DESTDIR=$(pwd) make install
```

## Usage
```
$ ./build_antlr4_parser.py -h
usage: build_antlr4_parser.py [-h] [--workdir WORKDIR] target

Create antlr4 parser for a given grammar in cpp that parses an input to tokens + parse_tree in json format

positional arguments:
  target             Target grammar to generate for

options:
  -h, --help         show this help message and exit
  --workdir WORKDIR  Path to the working directory for generated files (Default: _workdir)

$ ./build_antlr4_parser.py url      # generate antlr4-url

$ cat grammars-v4/url/examples/example2.txt| ./antlr4-url
```
