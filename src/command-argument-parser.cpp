#include <array>
#include <cstdint>

#include "command-argument-parser.hpp"

bool CommandParser::parseStringArgument(std::string_view& command)
{
  static constexpr std::array<std::string_view, 2> command_arguments{
    "--c-major", "--c#-major"};

  for (uint8_t index {0}; index < command_arguments.size(); ++index ) {
     
  } 
  return false;
}
