#include <iostream>

#include "lexan.h"

using namespace std;

int main ( int argc, char * argv[] )
{
  if ( argc == 1 )
  {
    cout << "Input data manualy:" << endl;
  }
  else if (argc == 2)
  {
    cout << "Input file: " << argv[1] << endl;
  }
  else
  {
    cout << "Wrong number of arguments" << endl;
    return 1;
  }
  CLexan lex;
  lex.hello();
  return 0;
}
