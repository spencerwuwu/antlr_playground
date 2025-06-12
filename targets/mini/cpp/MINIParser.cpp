
// Generated from MINI.g4 by ANTLR 4.13.2


#include "MINIListener.h"

#include "MINIParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MINIParserStaticData final {
  MINIParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MINIParserStaticData(const MINIParserStaticData&) = delete;
  MINIParserStaticData(MINIParserStaticData&&) = delete;
  MINIParserStaticData& operator=(const MINIParserStaticData&) = delete;
  MINIParserStaticData& operator=(MINIParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag miniParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MINIParserStaticData> miniParserStaticData = nullptr;

void miniParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (miniParserStaticData != nullptr) {
    return;
  }
#else
  assert(miniParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MINIParserStaticData>(
    std::vector<std::string>{
      "prog"
    },
    std::vector<std::string>{
      "", "'/'"
    },
    std::vector<std::string>{
      "", "", "ENDA", "ENDB"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,3,16,2,0,7,0,1,0,1,0,4,0,5,8,0,11,0,12,0,6,1,0,1,0,5,0,11,8,0,10,
  	0,12,0,14,9,0,1,0,0,0,1,0,0,0,16,0,2,1,0,0,0,2,4,5,1,0,0,3,5,5,2,0,0,
  	4,3,1,0,0,0,5,6,1,0,0,0,6,4,1,0,0,0,6,7,1,0,0,0,7,8,1,0,0,0,8,12,5,1,
  	0,0,9,11,5,3,0,0,10,9,1,0,0,0,11,14,1,0,0,0,12,10,1,0,0,0,12,13,1,0,0,
  	0,13,1,1,0,0,0,14,12,1,0,0,0,2,6,12
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  miniParserStaticData = std::move(staticData);
}

}

MINIParser::MINIParser(TokenStream *input) : MINIParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MINIParser::MINIParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MINIParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *miniParserStaticData->atn, miniParserStaticData->decisionToDFA, miniParserStaticData->sharedContextCache, options);
}

MINIParser::~MINIParser() {
  delete _interpreter;
}

const atn::ATN& MINIParser::getATN() const {
  return *miniParserStaticData->atn;
}

std::string MINIParser::getGrammarFileName() const {
  return "MINI.g4";
}

const std::vector<std::string>& MINIParser::getRuleNames() const {
  return miniParserStaticData->ruleNames;
}

const dfa::Vocabulary& MINIParser::getVocabulary() const {
  return miniParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MINIParser::getSerializedATN() const {
  return miniParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

MINIParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MINIParser::ProgContext::ENDA() {
  return getTokens(MINIParser::ENDA);
}

tree::TerminalNode* MINIParser::ProgContext::ENDA(size_t i) {
  return getToken(MINIParser::ENDA, i);
}

std::vector<tree::TerminalNode *> MINIParser::ProgContext::ENDB() {
  return getTokens(MINIParser::ENDB);
}

tree::TerminalNode* MINIParser::ProgContext::ENDB(size_t i) {
  return getToken(MINIParser::ENDB, i);
}


size_t MINIParser::ProgContext::getRuleIndex() const {
  return MINIParser::RuleProg;
}

void MINIParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MINIListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void MINIParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MINIListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

MINIParser::ProgContext* MINIParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, MINIParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    match(MINIParser::T__0);
    setState(4); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(3);
      match(MINIParser::ENDA);
      setState(6); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MINIParser::ENDA);
    setState(8);
    match(MINIParser::T__0);
    setState(12);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MINIParser::ENDB) {
      setState(9);
      match(MINIParser::ENDB);
      setState(14);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void MINIParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  miniParserInitialize();
#else
  ::antlr4::internal::call_once(miniParserOnceFlag, miniParserInitialize);
#endif
}
