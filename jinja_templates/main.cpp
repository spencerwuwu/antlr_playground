#include <iostream>
#include <vector>
#include <map>

#include "antlr4-runtime.h"
#include "{{target_lexer}}.h"
#include "{{target_parser}}.h"
#include "{{target_base}}BaseVisitor.h"

#include "nlohmann/json.hpp"

//using namespace antlrcpptest;
using namespace antlr4;
using json = nlohmann::json;


class JsonVisitor : public {{target_base}}BaseVisitor {
    public:
        json json_visit(tree::ParseTree *ctx, std::vector<std::string> ruleNames) {

            // Terminals
            if (auto terminal = dynamic_cast<tree::TerminalNode*>(ctx)) {
                return json{ {"type", "terminal"}, {"text", terminal->getText()}};
            }
            // Rules
            else if (auto ruleContext = dynamic_cast<ParserRuleContext*>(ctx)) {
                json node;
                node["type"] = "rule";
                node["text"] = ruleContext->getText();
                // Get the rule name index
                node["ruleName"] = ruleNames[ruleContext->getRuleIndex()]; 

                std::vector<json> children;
                for (size_t i = 0; i < ctx->children.size(); ++i) {
                    children.push_back(json_visit(ctx->children[i], ruleNames));
                }
                node["children"] = children;
                return node;
            }
            return json();
        }
};


class MyErrorListener : public antlr4::BaseErrorListener {
    public:
        void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override {
            std::cerr << "Error at line " << line << ":" << charPositionInLine << " - " << msg << std::endl;
            exit(1);
        }
};


int main(int argc, const char* argv[]) {

    // Read from stdin
    ANTLRInputStream input(std::cin);

    // Parse input with lexer
    {{target_lexer}} lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Collect tokens as a list
    tokens.fill();
    json json_tokens = json::array();
    for (auto token : tokens.getTokens()) {
        json_tokens.push_back(token->getText());
        //std::cout << token->toString() << std::endl;
        //std::cout << token->getText() << std::endl;
    }

    // Parse the tokens
    {{target_parser}} parser(&tokens);

    // Register error listener, exit when error
    MyErrorListener errorListener;
    parser.removeErrorListeners();
    parser.addErrorListener(&errorListener);

    tree::ParseTree* tree = parser.{{start_rule}}();
    //std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    // Create parse tree and store as json
    JsonVisitor visitor;
    json json_tree = visitor.json_visit(tree, parser.getRuleNames());

    // Combine the tokens and parse tree, print
    json json_output = json::object({ {"tokens", json_tokens}, {"parse_tree", json_tree}});
    std::cout << json_output.dump(4) << std::endl;

    return 0;
}


