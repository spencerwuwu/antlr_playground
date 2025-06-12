
// Generated from MINI.g4 by ANTLR 4.13.2


#include "MINILexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MINILexerStaticData final {
  MINILexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MINILexerStaticData(const MINILexerStaticData&) = delete;
  MINILexerStaticData(MINILexerStaticData&&) = delete;
  MINILexerStaticData& operator=(const MINILexerStaticData&) = delete;
  MINILexerStaticData& operator=(MINILexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag minilexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MINILexerStaticData> minilexerLexerStaticData = nullptr;

void minilexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (minilexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(minilexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MINILexerStaticData>(
    std::vector<std::string>{
      "T__0", "ENDA", "ENDB"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'/'"
    },
    std::vector<std::string>{
      "", "", "ENDA", "ENDB"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,3,13,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,1,1,1,1,1,2,1,2,0,0,3,1,
  	1,3,2,5,3,1,0,2,1,0,97,99,1,0,97,100,12,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,
  	0,0,0,1,7,1,0,0,0,3,9,1,0,0,0,5,11,1,0,0,0,7,8,5,47,0,0,8,2,1,0,0,0,9,
  	10,7,0,0,0,10,4,1,0,0,0,11,12,7,1,0,0,12,6,1,0,0,0,1,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  minilexerLexerStaticData = std::move(staticData);
}

}

MINILexer::MINILexer(CharStream *input) : Lexer(input) {
  MINILexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *minilexerLexerStaticData->atn, minilexerLexerStaticData->decisionToDFA, minilexerLexerStaticData->sharedContextCache);
}

MINILexer::~MINILexer() {
  delete _interpreter;
}

std::string MINILexer::getGrammarFileName() const {
  return "MINI.g4";
}

const std::vector<std::string>& MINILexer::getRuleNames() const {
  return minilexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MINILexer::getChannelNames() const {
  return minilexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MINILexer::getModeNames() const {
  return minilexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MINILexer::getVocabulary() const {
  return minilexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MINILexer::getSerializedATN() const {
  return minilexerLexerStaticData->serializedATN;
}

const atn::ATN& MINILexer::getATN() const {
  return *minilexerLexerStaticData->atn;
}




void MINILexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  minilexerLexerInitialize();
#else
  ::antlr4::internal::call_once(minilexerLexerOnceFlag, minilexerLexerInitialize);
#endif
}
