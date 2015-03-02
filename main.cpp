#include <iostream>
#include <string>

#include "lexan.h"

using namespace std;

int main ( int argc, char * argv[] )
{
  string strFileName;
  if ( argc == 1 )
  {
    cout << "Keyboard input:" << endl;
  }
  else if (argc == 2)
  {
    cout << "Input from file: " << argv[1] << endl;
    strFileName = argv[1];
  }
  else
  {
    cout << "Wrong number of arguments" << endl;
    return 1;
  }
  CLexan Lexan;
  if (!Lexan.init(strFileName))
  {
    cout << "Could not create lexical analyzer" << endl;
    return 1;
  }
  CLexicalSymbol lexSymbol;
  do
  {
    Lexan.readLexicalSymbol(lexSymbol);
  }
  while (lexSymbol.getType() != LexSymbolType::EOI);
  return 0;
}
