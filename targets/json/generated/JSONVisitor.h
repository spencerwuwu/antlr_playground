
// Generated from JSON.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "JSONParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by JSONParser.
 */
class  JSONVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by JSONParser.
   */
    virtual std::any visitJson(JSONParser::JsonContext *context) = 0;

    virtual std::any visitObj(JSONParser::ObjContext *context) = 0;

    virtual std::any visitPair(JSONParser::PairContext *context) = 0;

    virtual std::any visitArr(JSONParser::ArrContext *context) = 0;

    virtual std::any visitValue(JSONParser::ValueContext *context) = 0;


};

