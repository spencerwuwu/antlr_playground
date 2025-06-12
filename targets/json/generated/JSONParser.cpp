
// Generated from JSON.g4 by ANTLR 4.13.2


#include "JSONListener.h"
#include "JSONVisitor.h"

#include "JSONParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct JSONParserStaticData final {
  JSONParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  JSONParserStaticData(const JSONParserStaticData&) = delete;
  JSONParserStaticData(JSONParserStaticData&&) = delete;
  JSONParserStaticData& operator=(const JSONParserStaticData&) = delete;
  JSONParserStaticData& operator=(JSONParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag jsonParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<JSONParserStaticData> jsonParserStaticData = nullptr;

void jsonParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (jsonParserStaticData != nullptr) {
    return;
  }
#else
  assert(jsonParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<JSONParserStaticData>(
    std::vector<std::string>{
      "json", "obj", "pair", "arr", "value"
    },
    std::vector<std::string>{
      "", "'{'", "','", "'}'", "':'", "'['", "']'", "'true'", "'false'", 
      "'null'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "STRING", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,12,57,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,1,1,1,1,
  	1,1,1,1,5,1,18,8,1,10,1,12,1,21,9,1,1,1,1,1,1,1,1,1,3,1,27,8,1,1,2,1,
  	2,1,2,1,2,1,3,1,3,1,3,1,3,5,3,37,8,3,10,3,12,3,40,9,3,1,3,1,3,1,3,1,3,
  	3,3,46,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,55,8,4,1,4,0,0,5,0,2,4,6,8,
  	0,0,61,0,10,1,0,0,0,2,26,1,0,0,0,4,28,1,0,0,0,6,45,1,0,0,0,8,54,1,0,0,
  	0,10,11,3,8,4,0,11,12,5,0,0,1,12,1,1,0,0,0,13,14,5,1,0,0,14,19,3,4,2,
  	0,15,16,5,2,0,0,16,18,3,4,2,0,17,15,1,0,0,0,18,21,1,0,0,0,19,17,1,0,0,
  	0,19,20,1,0,0,0,20,22,1,0,0,0,21,19,1,0,0,0,22,23,5,3,0,0,23,27,1,0,0,
  	0,24,25,5,1,0,0,25,27,5,3,0,0,26,13,1,0,0,0,26,24,1,0,0,0,27,3,1,0,0,
  	0,28,29,5,10,0,0,29,30,5,4,0,0,30,31,3,8,4,0,31,5,1,0,0,0,32,33,5,5,0,
  	0,33,38,3,8,4,0,34,35,5,2,0,0,35,37,3,8,4,0,36,34,1,0,0,0,37,40,1,0,0,
  	0,38,36,1,0,0,0,38,39,1,0,0,0,39,41,1,0,0,0,40,38,1,0,0,0,41,42,5,6,0,
  	0,42,46,1,0,0,0,43,44,5,5,0,0,44,46,5,6,0,0,45,32,1,0,0,0,45,43,1,0,0,
  	0,46,7,1,0,0,0,47,55,5,10,0,0,48,55,5,11,0,0,49,55,3,2,1,0,50,55,3,6,
  	3,0,51,55,5,7,0,0,52,55,5,8,0,0,53,55,5,9,0,0,54,47,1,0,0,0,54,48,1,0,
  	0,0,54,49,1,0,0,0,54,50,1,0,0,0,54,51,1,0,0,0,54,52,1,0,0,0,54,53,1,0,
  	0,0,55,9,1,0,0,0,5,19,26,38,45,54
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  jsonParserStaticData = std::move(staticData);
}

}

JSONParser::JSONParser(TokenStream *input) : JSONParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

JSONParser::JSONParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  JSONParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *jsonParserStaticData->atn, jsonParserStaticData->decisionToDFA, jsonParserStaticData->sharedContextCache, options);
}

JSONParser::~JSONParser() {
  delete _interpreter;
}

const atn::ATN& JSONParser::getATN() const {
  return *jsonParserStaticData->atn;
}

std::string JSONParser::getGrammarFileName() const {
  return "JSON.g4";
}

const std::vector<std::string>& JSONParser::getRuleNames() const {
  return jsonParserStaticData->ruleNames;
}

const dfa::Vocabulary& JSONParser::getVocabulary() const {
  return jsonParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView JSONParser::getSerializedATN() const {
  return jsonParserStaticData->serializedATN;
}


//----------------- JsonContext ------------------------------------------------------------------

JSONParser::JsonContext::JsonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JSONParser::ValueContext* JSONParser::JsonContext::value() {
  return getRuleContext<JSONParser::ValueContext>(0);
}

tree::TerminalNode* JSONParser::JsonContext::EOF() {
  return getToken(JSONParser::EOF, 0);
}


size_t JSONParser::JsonContext::getRuleIndex() const {
  return JSONParser::RuleJson;
}

void JSONParser::JsonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJson(this);
}

void JSONParser::JsonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJson(this);
}


std::any JSONParser::JsonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitJson(this);
  else
    return visitor->visitChildren(this);
}

JSONParser::JsonContext* JSONParser::json() {
  JsonContext *_localctx = _tracker.createInstance<JsonContext>(_ctx, getState());
  enterRule(_localctx, 0, JSONParser::RuleJson);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
    value();
    setState(11);
    match(JSONParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjContext ------------------------------------------------------------------

JSONParser::ObjContext::ObjContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JSONParser::PairContext *> JSONParser::ObjContext::pair() {
  return getRuleContexts<JSONParser::PairContext>();
}

JSONParser::PairContext* JSONParser::ObjContext::pair(size_t i) {
  return getRuleContext<JSONParser::PairContext>(i);
}


size_t JSONParser::ObjContext::getRuleIndex() const {
  return JSONParser::RuleObj;
}

void JSONParser::ObjContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObj(this);
}

void JSONParser::ObjContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObj(this);
}


std::any JSONParser::ObjContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitObj(this);
  else
    return visitor->visitChildren(this);
}

JSONParser::ObjContext* JSONParser::obj() {
  ObjContext *_localctx = _tracker.createInstance<ObjContext>(_ctx, getState());
  enterRule(_localctx, 2, JSONParser::RuleObj);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(26);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(13);
      match(JSONParser::T__0);
      setState(14);
      pair();
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == JSONParser::T__1) {
        setState(15);
        match(JSONParser::T__1);
        setState(16);
        pair();
        setState(21);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(22);
      match(JSONParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(24);
      match(JSONParser::T__0);
      setState(25);
      match(JSONParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PairContext ------------------------------------------------------------------

JSONParser::PairContext::PairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JSONParser::PairContext::STRING() {
  return getToken(JSONParser::STRING, 0);
}

JSONParser::ValueContext* JSONParser::PairContext::value() {
  return getRuleContext<JSONParser::ValueContext>(0);
}


size_t JSONParser::PairContext::getRuleIndex() const {
  return JSONParser::RulePair;
}

void JSONParser::PairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPair(this);
}

void JSONParser::PairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPair(this);
}


std::any JSONParser::PairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitPair(this);
  else
    return visitor->visitChildren(this);
}

JSONParser::PairContext* JSONParser::pair() {
  PairContext *_localctx = _tracker.createInstance<PairContext>(_ctx, getState());
  enterRule(_localctx, 4, JSONParser::RulePair);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(JSONParser::STRING);
    setState(29);
    match(JSONParser::T__3);
    setState(30);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrContext ------------------------------------------------------------------

JSONParser::ArrContext::ArrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JSONParser::ValueContext *> JSONParser::ArrContext::value() {
  return getRuleContexts<JSONParser::ValueContext>();
}

JSONParser::ValueContext* JSONParser::ArrContext::value(size_t i) {
  return getRuleContext<JSONParser::ValueContext>(i);
}


size_t JSONParser::ArrContext::getRuleIndex() const {
  return JSONParser::RuleArr;
}

void JSONParser::ArrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArr(this);
}

void JSONParser::ArrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArr(this);
}


std::any JSONParser::ArrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitArr(this);
  else
    return visitor->visitChildren(this);
}

JSONParser::ArrContext* JSONParser::arr() {
  ArrContext *_localctx = _tracker.createInstance<ArrContext>(_ctx, getState());
  enterRule(_localctx, 6, JSONParser::RuleArr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      match(JSONParser::T__4);
      setState(33);
      value();
      setState(38);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == JSONParser::T__1) {
        setState(34);
        match(JSONParser::T__1);
        setState(35);
        value();
        setState(40);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(41);
      match(JSONParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      match(JSONParser::T__4);
      setState(44);
      match(JSONParser::T__5);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

JSONParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JSONParser::ValueContext::STRING() {
  return getToken(JSONParser::STRING, 0);
}

tree::TerminalNode* JSONParser::ValueContext::NUMBER() {
  return getToken(JSONParser::NUMBER, 0);
}

JSONParser::ObjContext* JSONParser::ValueContext::obj() {
  return getRuleContext<JSONParser::ObjContext>(0);
}

JSONParser::ArrContext* JSONParser::ValueContext::arr() {
  return getRuleContext<JSONParser::ArrContext>(0);
}


size_t JSONParser::ValueContext::getRuleIndex() const {
  return JSONParser::RuleValue;
}

void JSONParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void JSONParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSONListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


std::any JSONParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

JSONParser::ValueContext* JSONParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 8, JSONParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(54);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JSONParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(47);
        match(JSONParser::STRING);
        break;
      }

      case JSONParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(48);
        match(JSONParser::NUMBER);
        break;
      }

      case JSONParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(49);
        obj();
        break;
      }

      case JSONParser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(50);
        arr();
        break;
      }

      case JSONParser::T__6: {
        enterOuterAlt(_localctx, 5);
        setState(51);
        match(JSONParser::T__6);
        break;
      }

      case JSONParser::T__7: {
        enterOuterAlt(_localctx, 6);
        setState(52);
        match(JSONParser::T__7);
        break;
      }

      case JSONParser::T__8: {
        enterOuterAlt(_localctx, 7);
        setState(53);
        match(JSONParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void JSONParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  jsonParserInitialize();
#else
  ::antlr4::internal::call_once(jsonParserOnceFlag, jsonParserInitialize);
#endif
}
