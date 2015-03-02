#include "lexicalsymbol.h"

CLexicalSymbol::CLexicalSymbol()
{
}

void CLexicalSymbol::setType(LexSymbolType lexType)
{
  m_lexType = lexType;
}

LexSymbolType CLexicalSymbol::getType()
{
  return m_lexType;
}
