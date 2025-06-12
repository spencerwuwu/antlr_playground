
// Generated from url.g4 by ANTLR 4.13.2


#include "urlListener.h"
#include "urlVisitor.h"

#include "urlParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct UrlParserStaticData final {
  UrlParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UrlParserStaticData(const UrlParserStaticData&) = delete;
  UrlParserStaticData(UrlParserStaticData&&) = delete;
  UrlParserStaticData& operator=(const UrlParserStaticData&) = delete;
  UrlParserStaticData& operator=(UrlParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag urlParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<UrlParserStaticData> urlParserStaticData = nullptr;

void urlParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (urlParserStaticData != nullptr) {
    return;
  }
#else
  assert(urlParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UrlParserStaticData>(
    std::vector<std::string>{
      "url_", "uri", "scheme", "host", "hostname", "v6host", "port", "path", 
      "user", "login", "password", "frag", "query", "search", "searchparameter", 
      "string"
    },
    std::vector<std::string>{
      "", "'://'", "':'", "'/'", "'['", "']'", "'::'", "'@'", "'#'", "'\\u003F'", 
      "'&'", "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "DIGITS", "HEX", "STRING", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,15,143,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,1,0,1,0,1,1,1,1,1,1,3,1,39,8,1,1,1,1,1,1,1,3,1,44,8,
  	1,1,1,1,1,3,1,48,8,1,3,1,50,8,1,1,1,3,1,53,8,1,1,1,3,1,56,8,1,1,1,3,1,
  	59,8,1,1,2,1,2,1,3,3,3,64,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,3,4,73,8,4,
  	1,5,3,5,76,8,5,1,5,1,5,3,5,80,8,5,1,5,1,5,1,5,3,5,85,8,5,5,5,87,8,5,10,
  	5,12,5,90,9,5,1,6,1,6,1,7,1,7,1,7,5,7,97,8,7,10,7,12,7,100,9,7,1,7,3,
  	7,103,8,7,1,8,1,8,1,9,1,9,1,9,3,9,110,8,9,1,9,1,9,1,10,1,10,1,11,1,11,
  	1,11,3,11,119,8,11,1,12,1,12,1,12,1,13,1,13,1,13,5,13,127,8,13,10,13,
  	12,13,130,9,13,1,14,1,14,1,14,1,14,1,14,3,14,137,8,14,3,14,139,8,14,1,
  	15,1,15,1,15,0,0,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,0,2,2,
  	0,2,2,6,6,2,0,12,12,14,14,147,0,32,1,0,0,0,2,35,1,0,0,0,4,60,1,0,0,0,
  	6,63,1,0,0,0,8,72,1,0,0,0,10,75,1,0,0,0,12,91,1,0,0,0,14,93,1,0,0,0,16,
  	104,1,0,0,0,18,106,1,0,0,0,20,113,1,0,0,0,22,115,1,0,0,0,24,120,1,0,0,
  	0,26,123,1,0,0,0,28,131,1,0,0,0,30,140,1,0,0,0,32,33,3,2,1,0,33,34,5,
  	0,0,1,34,1,1,0,0,0,35,36,3,4,2,0,36,38,5,1,0,0,37,39,3,18,9,0,38,37,1,
  	0,0,0,38,39,1,0,0,0,39,40,1,0,0,0,40,43,3,6,3,0,41,42,5,2,0,0,42,44,3,
  	12,6,0,43,41,1,0,0,0,43,44,1,0,0,0,44,49,1,0,0,0,45,47,5,3,0,0,46,48,
  	3,14,7,0,47,46,1,0,0,0,47,48,1,0,0,0,48,50,1,0,0,0,49,45,1,0,0,0,49,50,
  	1,0,0,0,50,52,1,0,0,0,51,53,3,24,12,0,52,51,1,0,0,0,52,53,1,0,0,0,53,
  	55,1,0,0,0,54,56,3,22,11,0,55,54,1,0,0,0,55,56,1,0,0,0,56,58,1,0,0,0,
  	57,59,5,15,0,0,58,57,1,0,0,0,58,59,1,0,0,0,59,3,1,0,0,0,60,61,3,30,15,
  	0,61,5,1,0,0,0,62,64,5,3,0,0,63,62,1,0,0,0,63,64,1,0,0,0,64,65,1,0,0,
  	0,65,66,3,8,4,0,66,7,1,0,0,0,67,73,3,30,15,0,68,69,5,4,0,0,69,70,3,10,
  	5,0,70,71,5,5,0,0,71,73,1,0,0,0,72,67,1,0,0,0,72,68,1,0,0,0,73,9,1,0,
  	0,0,74,76,5,6,0,0,75,74,1,0,0,0,75,76,1,0,0,0,76,79,1,0,0,0,77,80,3,30,
  	15,0,78,80,5,12,0,0,79,77,1,0,0,0,79,78,1,0,0,0,80,88,1,0,0,0,81,84,7,
  	0,0,0,82,85,3,30,15,0,83,85,5,12,0,0,84,82,1,0,0,0,84,83,1,0,0,0,85,87,
  	1,0,0,0,86,81,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,11,
  	1,0,0,0,90,88,1,0,0,0,91,92,5,12,0,0,92,13,1,0,0,0,93,98,3,30,15,0,94,
  	95,5,3,0,0,95,97,3,30,15,0,96,94,1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,
  	98,99,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,101,103,5,3,0,0,102,101,1,
  	0,0,0,102,103,1,0,0,0,103,15,1,0,0,0,104,105,3,30,15,0,105,17,1,0,0,0,
  	106,109,3,16,8,0,107,108,5,2,0,0,108,110,3,20,10,0,109,107,1,0,0,0,109,
  	110,1,0,0,0,110,111,1,0,0,0,111,112,5,7,0,0,112,19,1,0,0,0,113,114,3,
  	30,15,0,114,21,1,0,0,0,115,118,5,8,0,0,116,119,3,30,15,0,117,119,5,12,
  	0,0,118,116,1,0,0,0,118,117,1,0,0,0,119,23,1,0,0,0,120,121,5,9,0,0,121,
  	122,3,26,13,0,122,25,1,0,0,0,123,128,3,28,14,0,124,125,5,10,0,0,125,127,
  	3,28,14,0,126,124,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,129,1,0,
  	0,0,129,27,1,0,0,0,130,128,1,0,0,0,131,138,3,30,15,0,132,136,5,11,0,0,
  	133,137,3,30,15,0,134,137,5,12,0,0,135,137,5,13,0,0,136,133,1,0,0,0,136,
  	134,1,0,0,0,136,135,1,0,0,0,137,139,1,0,0,0,138,132,1,0,0,0,138,139,1,
  	0,0,0,139,29,1,0,0,0,140,141,7,1,0,0,141,31,1,0,0,0,20,38,43,47,49,52,
  	55,58,63,72,75,79,84,88,98,102,109,118,128,136,138
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  urlParserStaticData = std::move(staticData);
}

}

urlParser::urlParser(TokenStream *input) : urlParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

urlParser::urlParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  urlParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *urlParserStaticData->atn, urlParserStaticData->decisionToDFA, urlParserStaticData->sharedContextCache, options);
}

urlParser::~urlParser() {
  delete _interpreter;
}

const atn::ATN& urlParser::getATN() const {
  return *urlParserStaticData->atn;
}

std::string urlParser::getGrammarFileName() const {
  return "url.g4";
}

const std::vector<std::string>& urlParser::getRuleNames() const {
  return urlParserStaticData->ruleNames;
}

const dfa::Vocabulary& urlParser::getVocabulary() const {
  return urlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView urlParser::getSerializedATN() const {
  return urlParserStaticData->serializedATN;
}


//----------------- Url_Context ------------------------------------------------------------------

urlParser::Url_Context::Url_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::UriContext* urlParser::Url_Context::uri() {
  return getRuleContext<urlParser::UriContext>(0);
}

tree::TerminalNode* urlParser::Url_Context::EOF() {
  return getToken(urlParser::EOF, 0);
}


size_t urlParser::Url_Context::getRuleIndex() const {
  return urlParser::RuleUrl_;
}

void urlParser::Url_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUrl_(this);
}

void urlParser::Url_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUrl_(this);
}


std::any urlParser::Url_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUrl_(this);
  else
    return visitor->visitChildren(this);
}

urlParser::Url_Context* urlParser::url_() {
  Url_Context *_localctx = _tracker.createInstance<Url_Context>(_ctx, getState());
  enterRule(_localctx, 0, urlParser::RuleUrl_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    uri();
    setState(33);
    match(urlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriContext ------------------------------------------------------------------

urlParser::UriContext::UriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::SchemeContext* urlParser::UriContext::scheme() {
  return getRuleContext<urlParser::SchemeContext>(0);
}

urlParser::HostContext* urlParser::UriContext::host() {
  return getRuleContext<urlParser::HostContext>(0);
}

urlParser::LoginContext* urlParser::UriContext::login() {
  return getRuleContext<urlParser::LoginContext>(0);
}

urlParser::PortContext* urlParser::UriContext::port() {
  return getRuleContext<urlParser::PortContext>(0);
}

urlParser::QueryContext* urlParser::UriContext::query() {
  return getRuleContext<urlParser::QueryContext>(0);
}

urlParser::FragContext* urlParser::UriContext::frag() {
  return getRuleContext<urlParser::FragContext>(0);
}

tree::TerminalNode* urlParser::UriContext::WS() {
  return getToken(urlParser::WS, 0);
}

urlParser::PathContext* urlParser::UriContext::path() {
  return getRuleContext<urlParser::PathContext>(0);
}


size_t urlParser::UriContext::getRuleIndex() const {
  return urlParser::RuleUri;
}

void urlParser::UriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUri(this);
}

void urlParser::UriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUri(this);
}


std::any urlParser::UriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUri(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UriContext* urlParser::uri() {
  UriContext *_localctx = _tracker.createInstance<UriContext>(_ctx, getState());
  enterRule(_localctx, 2, urlParser::RuleUri);
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
    setState(35);
    scheme();
    setState(36);
    match(urlParser::T__0);
    setState(38);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(37);
      login();
      break;
    }

    default:
      break;
    }
    setState(40);
    host();
    setState(43);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__1) {
      setState(41);
      match(urlParser::T__1);
      setState(42);
      port();
    }
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__2) {
      setState(45);
      match(urlParser::T__2);
      setState(47);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == urlParser::DIGITS

      || _la == urlParser::STRING) {
        setState(46);
        path();
      }
    }
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__8) {
      setState(51);
      query();
    }
    setState(55);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__7) {
      setState(54);
      frag();
    }
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::WS) {
      setState(57);
      match(urlParser::WS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeContext ------------------------------------------------------------------

urlParser::SchemeContext::SchemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::StringContext* urlParser::SchemeContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::SchemeContext::getRuleIndex() const {
  return urlParser::RuleScheme;
}

void urlParser::SchemeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScheme(this);
}

void urlParser::SchemeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScheme(this);
}


std::any urlParser::SchemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitScheme(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SchemeContext* urlParser::scheme() {
  SchemeContext *_localctx = _tracker.createInstance<SchemeContext>(_ctx, getState());
  enterRule(_localctx, 4, urlParser::RuleScheme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HostContext ------------------------------------------------------------------

urlParser::HostContext::HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::HostnameContext* urlParser::HostContext::hostname() {
  return getRuleContext<urlParser::HostnameContext>(0);
}


size_t urlParser::HostContext::getRuleIndex() const {
  return urlParser::RuleHost;
}

void urlParser::HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHost(this);
}

void urlParser::HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHost(this);
}


std::any urlParser::HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitHost(this);
  else
    return visitor->visitChildren(this);
}

urlParser::HostContext* urlParser::host() {
  HostContext *_localctx = _tracker.createInstance<HostContext>(_ctx, getState());
  enterRule(_localctx, 6, urlParser::RuleHost);
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
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__2) {
      setState(62);
      match(urlParser::T__2);
    }
    setState(65);
    hostname();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HostnameContext ------------------------------------------------------------------

urlParser::HostnameContext::HostnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t urlParser::HostnameContext::getRuleIndex() const {
  return urlParser::RuleHostname;
}

void urlParser::HostnameContext::copyFrom(HostnameContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IPv6HostContext ------------------------------------------------------------------

urlParser::V6hostContext* urlParser::IPv6HostContext::v6host() {
  return getRuleContext<urlParser::V6hostContext>(0);
}

urlParser::IPv6HostContext::IPv6HostContext(HostnameContext *ctx) { copyFrom(ctx); }

void urlParser::IPv6HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIPv6Host(this);
}
void urlParser::IPv6HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIPv6Host(this);
}

std::any urlParser::IPv6HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitIPv6Host(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DomainNameOrIPv4HostContext ------------------------------------------------------------------

urlParser::StringContext* urlParser::DomainNameOrIPv4HostContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}

urlParser::DomainNameOrIPv4HostContext::DomainNameOrIPv4HostContext(HostnameContext *ctx) { copyFrom(ctx); }

void urlParser::DomainNameOrIPv4HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDomainNameOrIPv4Host(this);
}
void urlParser::DomainNameOrIPv4HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDomainNameOrIPv4Host(this);
}

std::any urlParser::DomainNameOrIPv4HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitDomainNameOrIPv4Host(this);
  else
    return visitor->visitChildren(this);
}
urlParser::HostnameContext* urlParser::hostname() {
  HostnameContext *_localctx = _tracker.createInstance<HostnameContext>(_ctx, getState());
  enterRule(_localctx, 8, urlParser::RuleHostname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DIGITS:
      case urlParser::STRING: {
        _localctx = _tracker.createInstance<urlParser::DomainNameOrIPv4HostContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(67);
        string();
        break;
      }

      case urlParser::T__3: {
        _localctx = _tracker.createInstance<urlParser::IPv6HostContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(68);
        match(urlParser::T__3);
        setState(69);
        v6host();
        setState(70);
        match(urlParser::T__4);
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

//----------------- V6hostContext ------------------------------------------------------------------

urlParser::V6hostContext::V6hostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<urlParser::StringContext *> urlParser::V6hostContext::string() {
  return getRuleContexts<urlParser::StringContext>();
}

urlParser::StringContext* urlParser::V6hostContext::string(size_t i) {
  return getRuleContext<urlParser::StringContext>(i);
}

std::vector<tree::TerminalNode *> urlParser::V6hostContext::DIGITS() {
  return getTokens(urlParser::DIGITS);
}

tree::TerminalNode* urlParser::V6hostContext::DIGITS(size_t i) {
  return getToken(urlParser::DIGITS, i);
}


size_t urlParser::V6hostContext::getRuleIndex() const {
  return urlParser::RuleV6host;
}

void urlParser::V6hostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6host(this);
}

void urlParser::V6hostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6host(this);
}


std::any urlParser::V6hostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitV6host(this);
  else
    return visitor->visitChildren(this);
}

urlParser::V6hostContext* urlParser::v6host() {
  V6hostContext *_localctx = _tracker.createInstance<V6hostContext>(_ctx, getState());
  enterRule(_localctx, 10, urlParser::RuleV6host);
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
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__5) {
      setState(74);
      match(urlParser::T__5);
    }
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(77);
      string();
      break;
    }

    case 2: {
      setState(78);
      match(urlParser::DIGITS);
      break;
    }

    default:
      break;
    }
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == urlParser::T__1

    || _la == urlParser::T__5) {
      setState(81);
      _la = _input->LA(1);
      if (!(_la == urlParser::T__1

      || _la == urlParser::T__5)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(84);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(82);
        string();
        break;
      }

      case 2: {
        setState(83);
        match(urlParser::DIGITS);
        break;
      }

      default:
        break;
      }
      setState(90);
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

//----------------- PortContext ------------------------------------------------------------------

urlParser::PortContext::PortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::PortContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}


size_t urlParser::PortContext::getRuleIndex() const {
  return urlParser::RulePort;
}

void urlParser::PortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPort(this);
}

void urlParser::PortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPort(this);
}


std::any urlParser::PortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitPort(this);
  else
    return visitor->visitChildren(this);
}

urlParser::PortContext* urlParser::port() {
  PortContext *_localctx = _tracker.createInstance<PortContext>(_ctx, getState());
  enterRule(_localctx, 12, urlParser::RulePort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(urlParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathContext ------------------------------------------------------------------

urlParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<urlParser::StringContext *> urlParser::PathContext::string() {
  return getRuleContexts<urlParser::StringContext>();
}

urlParser::StringContext* urlParser::PathContext::string(size_t i) {
  return getRuleContext<urlParser::StringContext>(i);
}


size_t urlParser::PathContext::getRuleIndex() const {
  return urlParser::RulePath;
}

void urlParser::PathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath(this);
}

void urlParser::PathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath(this);
}


std::any urlParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

urlParser::PathContext* urlParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 14, urlParser::RulePath);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(93);
    string();
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(94);
        match(urlParser::T__2);
        setState(95);
        string(); 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__2) {
      setState(101);
      match(urlParser::T__2);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserContext ------------------------------------------------------------------

urlParser::UserContext::UserContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::StringContext* urlParser::UserContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::UserContext::getRuleIndex() const {
  return urlParser::RuleUser;
}

void urlParser::UserContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUser(this);
}

void urlParser::UserContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUser(this);
}


std::any urlParser::UserContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUser(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UserContext* urlParser::user() {
  UserContext *_localctx = _tracker.createInstance<UserContext>(_ctx, getState());
  enterRule(_localctx, 16, urlParser::RuleUser);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoginContext ------------------------------------------------------------------

urlParser::LoginContext::LoginContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::UserContext* urlParser::LoginContext::user() {
  return getRuleContext<urlParser::UserContext>(0);
}

urlParser::PasswordContext* urlParser::LoginContext::password() {
  return getRuleContext<urlParser::PasswordContext>(0);
}


size_t urlParser::LoginContext::getRuleIndex() const {
  return urlParser::RuleLogin;
}

void urlParser::LoginContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogin(this);
}

void urlParser::LoginContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogin(this);
}


std::any urlParser::LoginContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitLogin(this);
  else
    return visitor->visitChildren(this);
}

urlParser::LoginContext* urlParser::login() {
  LoginContext *_localctx = _tracker.createInstance<LoginContext>(_ctx, getState());
  enterRule(_localctx, 18, urlParser::RuleLogin);
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
    setState(106);
    user();
    setState(109);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__1) {
      setState(107);
      match(urlParser::T__1);
      setState(108);
      password();
    }
    setState(111);
    match(urlParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PasswordContext ------------------------------------------------------------------

urlParser::PasswordContext::PasswordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::StringContext* urlParser::PasswordContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::PasswordContext::getRuleIndex() const {
  return urlParser::RulePassword;
}

void urlParser::PasswordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPassword(this);
}

void urlParser::PasswordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPassword(this);
}


std::any urlParser::PasswordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitPassword(this);
  else
    return visitor->visitChildren(this);
}

urlParser::PasswordContext* urlParser::password() {
  PasswordContext *_localctx = _tracker.createInstance<PasswordContext>(_ctx, getState());
  enterRule(_localctx, 20, urlParser::RulePassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FragContext ------------------------------------------------------------------

urlParser::FragContext::FragContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::StringContext* urlParser::FragContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}

tree::TerminalNode* urlParser::FragContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}


size_t urlParser::FragContext::getRuleIndex() const {
  return urlParser::RuleFrag;
}

void urlParser::FragContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrag(this);
}

void urlParser::FragContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrag(this);
}


std::any urlParser::FragContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitFrag(this);
  else
    return visitor->visitChildren(this);
}

urlParser::FragContext* urlParser::frag() {
  FragContext *_localctx = _tracker.createInstance<FragContext>(_ctx, getState());
  enterRule(_localctx, 22, urlParser::RuleFrag);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(urlParser::T__7);
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(116);
      string();
      break;
    }

    case 2: {
      setState(117);
      match(urlParser::DIGITS);
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

//----------------- QueryContext ------------------------------------------------------------------

urlParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::SearchContext* urlParser::QueryContext::search() {
  return getRuleContext<urlParser::SearchContext>(0);
}


size_t urlParser::QueryContext::getRuleIndex() const {
  return urlParser::RuleQuery;
}

void urlParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void urlParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}


std::any urlParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

urlParser::QueryContext* urlParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 24, urlParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(urlParser::T__8);
    setState(121);
    search();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchContext ------------------------------------------------------------------

urlParser::SearchContext::SearchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<urlParser::SearchparameterContext *> urlParser::SearchContext::searchparameter() {
  return getRuleContexts<urlParser::SearchparameterContext>();
}

urlParser::SearchparameterContext* urlParser::SearchContext::searchparameter(size_t i) {
  return getRuleContext<urlParser::SearchparameterContext>(i);
}


size_t urlParser::SearchContext::getRuleIndex() const {
  return urlParser::RuleSearch;
}

void urlParser::SearchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearch(this);
}

void urlParser::SearchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearch(this);
}


std::any urlParser::SearchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitSearch(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SearchContext* urlParser::search() {
  SearchContext *_localctx = _tracker.createInstance<SearchContext>(_ctx, getState());
  enterRule(_localctx, 26, urlParser::RuleSearch);
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
    setState(123);
    searchparameter();
    setState(128);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == urlParser::T__9) {
      setState(124);
      match(urlParser::T__9);
      setState(125);
      searchparameter();
      setState(130);
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

//----------------- SearchparameterContext ------------------------------------------------------------------

urlParser::SearchparameterContext::SearchparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<urlParser::StringContext *> urlParser::SearchparameterContext::string() {
  return getRuleContexts<urlParser::StringContext>();
}

urlParser::StringContext* urlParser::SearchparameterContext::string(size_t i) {
  return getRuleContext<urlParser::StringContext>(i);
}

tree::TerminalNode* urlParser::SearchparameterContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}

tree::TerminalNode* urlParser::SearchparameterContext::HEX() {
  return getToken(urlParser::HEX, 0);
}


size_t urlParser::SearchparameterContext::getRuleIndex() const {
  return urlParser::RuleSearchparameter;
}

void urlParser::SearchparameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchparameter(this);
}

void urlParser::SearchparameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchparameter(this);
}


std::any urlParser::SearchparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitSearchparameter(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SearchparameterContext* urlParser::searchparameter() {
  SearchparameterContext *_localctx = _tracker.createInstance<SearchparameterContext>(_ctx, getState());
  enterRule(_localctx, 28, urlParser::RuleSearchparameter);
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
    setState(131);
    string();
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::T__10) {
      setState(132);
      match(urlParser::T__10);
      setState(136);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(133);
        string();
        break;
      }

      case 2: {
        setState(134);
        match(urlParser::DIGITS);
        break;
      }

      case 3: {
        setState(135);
        match(urlParser::HEX);
        break;
      }

      default:
        break;
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

urlParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::StringContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::StringContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}


size_t urlParser::StringContext::getRuleIndex() const {
  return urlParser::RuleString;
}

void urlParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void urlParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


std::any urlParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

urlParser::StringContext* urlParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 30, urlParser::RuleString);
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
    setState(140);
    _la = _input->LA(1);
    if (!(_la == urlParser::DIGITS

    || _la == urlParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void urlParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  urlParserInitialize();
#else
  ::antlr4::internal::call_once(urlParserOnceFlag, urlParserInitialize);
#endif
}
