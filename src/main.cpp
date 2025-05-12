#include "scale.hpp"
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <ostream>
#include <stdlib.h>
#include <string_view>
#include <strings.h>

int main (int argc, char *argv[]) 
{
  // Exit if no arguements are provided for the application.
  if (argc <= 1) {
    std::cout << "No Arguements provided!" << std::endl;
    return 0; 
  }
  constexpr static std::array<std::string_view, 2> command_arguements{"--c-major", "--c#-major"};
  for (uint8_t index { 0 }; index < command_arguements.size(); ++index) {
    if (command_arguements[ index ].compare("--c-major") == 0) {
      auto major_scale {std::make_unique<MusicScale>(MusicScale::TonicNote::C)};
      major_scale->startKeyGeneration();
    } 
    else if (command_arguements[ index ].compare("--c#-major") == 0) {
      auto major_scale {std::make_unique<MusicScale>(MusicScale::TonicNote::C_Sharp)};
      major_scale->startKeyGeneration();
    }
    return 0;
  }

  std::cout << "Major Keys:" << std::endl;
  auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::G_Flat) };
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::D_Flat;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::A_Flat;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::E_Flat;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::B_Flat;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::F;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::C;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::G;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::D;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::A;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::E;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::B;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::F_Sharp;
  major_scale->startKeyGeneration();
  major_scale->m_key_tonic = MusicScale::TonicNote::C_Sharp;
  major_scale->startKeyGeneration();
  
  return 0;
}   
