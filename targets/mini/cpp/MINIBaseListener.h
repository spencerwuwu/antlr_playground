
// Generated from MINI.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MINIListener.h"


/**
 * This class provides an empty implementation of MINIListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MINIBaseListener : public MINIListener {
public:

  virtual void enterProg(MINIParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(MINIParser::ProgContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

