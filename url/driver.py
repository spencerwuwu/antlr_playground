import sys
from antlr4 import FileStream, InputStream, CommonTokenStream, ParseTreeWalker

from python.urlLexer import urlLexer
from python.urlParser import urlParser
from python.urlListener import urlListener


def main(argv):
    if len(argv) > 1:
        input_stream = FileStream(argv[1])
    else:
        input_stream = InputStream(input())
    lexer = urlLexer(input_stream)

    tokens = lexer.getAllTokens()
    #vocabulary = lexer.vocabulary
    #print(attr(list(tokens)[0]))
    for token in tokens:
        print(f"Token Text: '{token.text}', Token Type: {token.type}")

    stream = CommonTokenStream(lexer)
    parser = urlParser(stream)
    tree = parser.url_()

    listener = urlListener()
    walker = ParseTreeWalker()
    walker.walk(listener, tree)

    print(tree.toStringTree(recog=parser))


if __name__ == '__main__':
    main(sys.argv)
