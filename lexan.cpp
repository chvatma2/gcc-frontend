#include "lexan.h"

const char * lexSymbolTable[12] =
{
  "IDENT", "NUMB", "PLUS", "MINUS", "LESS", "LESS_OR_EQ", "ASSIGN",
  "kwIF", "kwTHEN", "kwELSE", "EOI", "ERR"
}; //symbol names in the same order as in LexSymbolType

CLexan::CLexan()
{

}

bool CLexan::init(string strFileName)
{
  if ( strFileName.empty() )
  {
    m_fInput = stdin;
  }
  else
  {
    m_fInput = fopen(strFileName.c_str(), "rt");
    if (!m_fInput)
    {
      cout << "Cannot find input file." << endl;
      return false;
    }
  }
  return true;
}

void CLexan::readLexicalSymbol(CLexicalSymbol &lexSymbol)
{

}
