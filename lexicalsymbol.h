#ifndef LEXICALSYMBOL_113511341
#define LEXICALSYMBOL_113511341

#include <cstdint>

enum  LexSymbolType{IDENT, NUMB, PLUS, MINUS, LESS, LESS_OR_EQ, ASSIGN,
                    kwIF, kwTHEN, kwELSE, EOI, ERR};

class CLexicalSymbol
{
public:
  CLexicalSymbol();
  LexSymbolType getType();
  void setType( LexSymbolType lexType );
private:
  LexSymbolType m_lexType;
};

class CLexicalNumber : CLexicalSymbol
{
private:
  int64_t m_iValue;
};

#endif //LEXICALSYMBOL_113511341
