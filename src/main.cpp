#include "scale.hpp"
#include <memory>
#include <stdlib.h>
#include <strings.h>

int main (int argc, char *argv[]) 
{
  auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::C) };
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
  return 0;
}   
