
// Generated from ArrayInit.g4 by ANTLR 4.13.2


#include "ArrayInitLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ArrayInitLexerStaticData final {
  ArrayInitLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ArrayInitLexerStaticData(const ArrayInitLexerStaticData&) = delete;
  ArrayInitLexerStaticData(ArrayInitLexerStaticData&&) = delete;
  ArrayInitLexerStaticData& operator=(const ArrayInitLexerStaticData&) = delete;
  ArrayInitLexerStaticData& operator=(ArrayInitLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag arrayinitlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ArrayInitLexerStaticData> arrayinitlexerLexerStaticData = nullptr;

void arrayinitlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (arrayinitlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(arrayinitlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ArrayInitLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "INT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'{'", "','", "'}'"
    },
    std::vector<std::string>{
      "", "", "", "", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,5,29,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,1,1,1,
  	1,2,1,2,1,3,4,3,19,8,3,11,3,12,3,20,1,4,4,4,24,8,4,11,4,12,4,25,1,4,1,
  	4,0,0,5,1,1,3,2,5,3,7,4,9,5,1,0,2,1,0,48,57,3,0,9,10,13,13,32,32,30,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,1,11,1,0,0,
  	0,3,13,1,0,0,0,5,15,1,0,0,0,7,18,1,0,0,0,9,23,1,0,0,0,11,12,5,123,0,0,
  	12,2,1,0,0,0,13,14,5,44,0,0,14,4,1,0,0,0,15,16,5,125,0,0,16,6,1,0,0,0,
  	17,19,7,0,0,0,18,17,1,0,0,0,19,20,1,0,0,0,20,18,1,0,0,0,20,21,1,0,0,0,
  	21,8,1,0,0,0,22,24,7,1,0,0,23,22,1,0,0,0,24,25,1,0,0,0,25,23,1,0,0,0,
  	25,26,1,0,0,0,26,27,1,0,0,0,27,28,6,4,0,0,28,10,1,0,0,0,3,0,20,25,1,6,
  	0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  arrayinitlexerLexerStaticData = std::move(staticData);
}

}

ArrayInitLexer::ArrayInitLexer(CharStream *input) : Lexer(input) {
  ArrayInitLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *arrayinitlexerLexerStaticData->atn, arrayinitlexerLexerStaticData->decisionToDFA, arrayinitlexerLexerStaticData->sharedContextCache);
}

ArrayInitLexer::~ArrayInitLexer() {
  delete _interpreter;
}

std::string ArrayInitLexer::getGrammarFileName() const {
  return "ArrayInit.g4";
}

const std::vector<std::string>& ArrayInitLexer::getRuleNames() const {
  return arrayinitlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ArrayInitLexer::getChannelNames() const {
  return arrayinitlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ArrayInitLexer::getModeNames() const {
  return arrayinitlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ArrayInitLexer::getVocabulary() const {
  return arrayinitlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ArrayInitLexer::getSerializedATN() const {
  return arrayinitlexerLexerStaticData->serializedATN;
}

const atn::ATN& ArrayInitLexer::getATN() const {
  return *arrayinitlexerLexerStaticData->atn;
}




void ArrayInitLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  arrayinitlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(arrayinitlexerLexerOnceFlag, arrayinitlexerLexerInitialize);
#endif
}
