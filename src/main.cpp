#include <stdlib.h>
#include <strings.h>

#include "command-argument-parser.hpp"

int main (int argc, char *argv[]) 
{
  CommandParser::checkForPassableArguementNumber(argc);
  CommandParser::parseCommand(argv[1]);
  return 0;
}   
