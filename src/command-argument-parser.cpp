#include <array>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <ostream>
#include <string_view>
#include <strings.h>

#include "command-argument-parser.hpp"
#include "scale.hpp"

static constexpr std::array<std::string_view, 15> command_arguments 
{
  "--list", "--c-major", "--g-major", "--d-major", "--a-major", "--e-major", "--b-major", "--gb-major", "--f#-major", "--c#-major"
  , "--db-major", "--ab-major", "--eb-major", "--bb-major", "--f-major"
};

void CommandParser::checkForPassableArguementNumber(uint8_t current_command)
{
  if (current_command <= 1) {
    listAllCommands();
    std::exit(0);
  }
}
void CommandParser::listAllCommands()
{
  for (uint8_t index { 0 }; index < command_arguments.size(); ++index) {
    std::cout << command_arguments [ index ] << std::endl; 
  }
}
void CommandParser::parseCommand(std::string_view current_command)
{
  if ( current_command.compare( command_arguments[ 0 ] ) == 0) // --list 
  {
    listAllCommands();
  }
  if ( current_command.compare( command_arguments[ 1 ] ) == 0 ) // --c-major
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::C) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 2 ])  == 0 ) // --g-major
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::G) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 3 ] ) == 0 ) // --d-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::D) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 4 ] ) == 0 ) // --a-major
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::A) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 5 ] ) == 0 ) // --e-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::E) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 6 ] ) == 0 ) // --b-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::B) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 7 ] ) == 0 ) // --gb-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::G_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 8 ] ) == 0 ) // --f#-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::F_Sharp) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 9 ] ) == 0 ) // --c#-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::C_Sharp) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 10 ] ) == 0 ) // --db-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::D_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 11 ] ) == 0 ) // --ab-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::A_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 12 ] ) == 0 ) // --eb-major
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::E_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 13 ] ) == 0 ) // --bb-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::B_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( command_arguments[ 14 ] ) == 0 ) // --f-major 
  {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::F) };
    major_scale->startKeyGeneration();
  }
}
