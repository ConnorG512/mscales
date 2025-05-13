#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <ostream>
#include <string_view>

#include "command-argument-parser.hpp"
#include "scale.hpp"

constexpr static std::string_view invalid_argument_message{ 
  "Invalid argument! Please use \"--help\" for more information." };

void CommandParser::checkForPassableArguementNumber(uint8_t current_command)
{
  if (current_command <= 1) {
    std::cout << invalid_argument_message << std::endl; 
    std::exit(0);
  }
}
void CommandParser::parseCommand(std::string_view current_command)
{
  if ( current_command.compare( "--major" ) == 0 ) {
    std::cout << "Major!" << std::endl; 
  }
  if ( current_command.compare( "--c-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::C) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--g-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::G) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--d-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::D) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--a-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::A) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--e-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::E) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--b-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::B) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--gb-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::G_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--f#-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::F_Sharp) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--c#-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::C_Sharp) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--db-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::D_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--ab-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::A_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--eb-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::E_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--bb-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::B_Flat) };
    major_scale->startKeyGeneration();
  }
  if ( current_command.compare( "--f-major" ) == 0 ) {
    auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::F) };
    major_scale->startKeyGeneration();
  }
}
