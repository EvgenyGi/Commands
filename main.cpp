#include <iostream>
#include "Command.hpp"
#include "CommandProcessor.hpp"
#include "Parser.hpp"
#include "Reader.hpp"
#include "reader_web.hpp"
#include <fstream>
#include <string>

using namespace std;


int main () {
  string line;
  ifstream myfile ;
  myfile.open("text.txt.txt");

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 

  return 0;

}