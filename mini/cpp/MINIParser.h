
// Generated from MINI.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  MINIParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, ENDA = 2, ENDB = 3
  };

  enum {
    RuleProg = 0
  };

  explicit MINIParser(antlr4::TokenStream *input);

  MINIParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MINIParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDA();
    antlr4::tree::TerminalNode* ENDA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENDB();
    antlr4::tree::TerminalNode* ENDB(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

