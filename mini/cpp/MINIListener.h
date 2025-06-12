
// Generated from MINI.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MINIParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MINIParser.
 */
class  MINIListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(MINIParser::ProgContext *ctx) = 0;
  virtual void exitProg(MINIParser::ProgContext *ctx) = 0;


};

