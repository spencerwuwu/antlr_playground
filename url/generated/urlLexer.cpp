
// Generated from url.g4 by ANTLR 4.13.2


#include "urlLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct UrlLexerStaticData final {
  UrlLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UrlLexerStaticData(const UrlLexerStaticData&) = delete;
  UrlLexerStaticData(UrlLexerStaticData&&) = delete;
  UrlLexerStaticData& operator=(const UrlLexerStaticData&) = delete;
  UrlLexerStaticData& operator=(UrlLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag urllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<UrlLexerStaticData> urllexerLexerStaticData = nullptr;

void urllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (urllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(urllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UrlLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "DIGITS", "HEX", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,15,84,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,6,
  	1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,4,11,58,8,11,11,11,12,11,59,
  	1,12,1,12,1,12,4,12,65,8,12,11,12,12,12,66,1,13,1,13,3,13,71,8,13,1,13,
  	1,13,5,13,75,8,13,10,13,12,13,78,9,13,1,14,4,14,81,8,14,11,14,12,14,82,
  	0,0,15,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,1,0,5,1,0,48,57,3,0,48,57,65,70,97,102,4,0,48,57,65,90,97,
  	122,126,126,5,0,43,43,45,46,48,57,65,90,97,122,2,0,10,10,13,13,89,0,1,
  	1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,
  	0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,
  	1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,1,31,1,0,0,0,3,35,1,0,
  	0,0,5,37,1,0,0,0,7,39,1,0,0,0,9,41,1,0,0,0,11,43,1,0,0,0,13,46,1,0,0,
  	0,15,48,1,0,0,0,17,50,1,0,0,0,19,52,1,0,0,0,21,54,1,0,0,0,23,57,1,0,0,
  	0,25,64,1,0,0,0,27,70,1,0,0,0,29,80,1,0,0,0,31,32,5,58,0,0,32,33,5,47,
  	0,0,33,34,5,47,0,0,34,2,1,0,0,0,35,36,5,58,0,0,36,4,1,0,0,0,37,38,5,47,
  	0,0,38,6,1,0,0,0,39,40,5,91,0,0,40,8,1,0,0,0,41,42,5,93,0,0,42,10,1,0,
  	0,0,43,44,5,58,0,0,44,45,5,58,0,0,45,12,1,0,0,0,46,47,5,64,0,0,47,14,
  	1,0,0,0,48,49,5,35,0,0,49,16,1,0,0,0,50,51,5,63,0,0,51,18,1,0,0,0,52,
  	53,5,38,0,0,53,20,1,0,0,0,54,55,5,61,0,0,55,22,1,0,0,0,56,58,7,0,0,0,
  	57,56,1,0,0,0,58,59,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,0,60,24,1,0,0,0,
  	61,62,5,37,0,0,62,63,7,1,0,0,63,65,7,1,0,0,64,61,1,0,0,0,65,66,1,0,0,
  	0,66,64,1,0,0,0,66,67,1,0,0,0,67,26,1,0,0,0,68,71,7,2,0,0,69,71,3,25,
  	12,0,70,68,1,0,0,0,70,69,1,0,0,0,71,76,1,0,0,0,72,75,7,3,0,0,73,75,3,
  	25,12,0,74,72,1,0,0,0,74,73,1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,
  	1,0,0,0,77,28,1,0,0,0,78,76,1,0,0,0,79,81,7,4,0,0,80,79,1,0,0,0,81,82,
  	1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,30,1,0,0,0,7,0,59,66,70,74,76,
  	82,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  urllexerLexerStaticData = std::move(staticData);
}

}

urlLexer::urlLexer(CharStream *input) : Lexer(input) {
  urlLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *urllexerLexerStaticData->atn, urllexerLexerStaticData->decisionToDFA, urllexerLexerStaticData->sharedContextCache);
}

urlLexer::~urlLexer() {
  delete _interpreter;
}

std::string urlLexer::getGrammarFileName() const {
  return "url.g4";
}

const std::vector<std::string>& urlLexer::getRuleNames() const {
  return urllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& urlLexer::getChannelNames() const {
  return urllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& urlLexer::getModeNames() const {
  return urllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& urlLexer::getVocabulary() const {
  return urllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView urlLexer::getSerializedATN() const {
  return urllexerLexerStaticData->serializedATN;
}

const atn::ATN& urlLexer::getATN() const {
  return *urllexerLexerStaticData->atn;
}




void urlLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  urllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(urllexerLexerOnceFlag, urllexerLexerInitialize);
#endif
}
