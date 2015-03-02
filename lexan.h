#ifndef LEXAN_1276714
#define LEXAN_1276714

#include <iostream>
#include <string>
#include <cstdio>

#include "lexicalsymbol.h"

using namespace std;

extern const char * lexSymbolTable[12];

class CLexan
{
public:
  CLexan();
  bool init(string strFileName);
  void readLexicalSymbol(CLexicalSymbol &lexSymbol);

private:
  FILE * m_fInput;
};

#endif //LEXAN_1276714
