#include <array>
#include <cstdint>
#include <iostream>
#include <ostream>
#include <string_view>
#include <sys/types.h>

#include "scale.hpp"

// PUBLIC
MusicScale::MusicScale(TonicNote tonic_note)
  : m_key_tonic { tonic_note } {}
void MusicScale::startKeyGeneration()
{
  uint8_t tonic_scale_offset = determineChromaticOffsetAndKey();
  calculateMusicKey(tonic_scale_offset);
}

// PRIVATE
uint8_t MusicScale::determineChromaticOffsetAndKey() 
{
  switch (m_key_tonic) {
    // Organised in relation to the Circle of Fiths
    case MusicScale::TonicNote::C:
      return 0;
    case MusicScale::TonicNote::G:
      return 7;
    case MusicScale::TonicNote::D:
      return 2;
    case MusicScale::TonicNote::A:
      return 9;
    case MusicScale::TonicNote::E:
      return 4; 
    case MusicScale::TonicNote::B:
      return 11;
    case MusicScale::TonicNote::G_Flat:
      return 6;
    case MusicScale::TonicNote::F_Sharp:
      return 6;
    case MusicScale::TonicNote::D_Flat:
      return 1;
    case MusicScale::TonicNote::A_Flat:
      return 8;
    case MusicScale::TonicNote::E_Flat:
      return 3;
    case MusicScale::TonicNote::B_Flat:
      return 10;
    case MusicScale::TonicNote::F:
      return 5;
  }
}
void MusicScale::calculateMusicKey(uint8_t scale_offset)
{
  uint8_t current_scale_increment { scale_offset };
  for (uint8_t index { 0 }; index < m_scale_increments.size(); ++index ) 
  {
    std::cout << m_chromatic_scale_sharp[ current_scale_increment ] << " ";
    current_scale_increment += m_scale_increments[ index ];
    current_scale_increment = current_scale_increment % m_chromatic_scale_sharp.size();
  };
  std::cout << std::endl; 
}

