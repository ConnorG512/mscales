#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <ostream>
#include <string>
#include <string_view>
#include <sys/types.h>
#include <vector>

#include "scale.hpp"

// PUBLIC
MusicScale::MusicScale(TonicNote tonic_note)
  : m_key_tonic { tonic_note } {}
void MusicScale::startKeyGeneration()
{
  KeyProperties current_key_properties{};
  determineChromaticOffsetAndKey(current_key_properties);
  calculateMusicKey(current_key_properties);
}

// PRIVATE
void MusicScale::determineChromaticOffsetAndKey(KeyProperties& current_key_properties) 
{
  static constexpr std::array<std::string_view, 12> chromatic_scale_sharp{ "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" }; 
  static constexpr std::array<std::string_view, 12> chromatic_scale_flat{ "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "B" };
  
  std::array<std::string_view, 7> roman_intervals_major {"I", "ii", "iii", "IV", "V", "vi", "vii°"};

  switch (m_key_tonic) {
    // Organised in relation to the Circle of Fiths
    // Returns a struct that contains the correct array to use as well as the note offset to count from.
    case MusicScale::TonicNote::C:
      current_key_properties.chromatic_scale = chromatic_scale_sharp;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 0;
      break;
    case MusicScale::TonicNote::G:
      current_key_properties.chromatic_scale = chromatic_scale_sharp;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 7;
      break;
    case MusicScale::TonicNote::D:
      current_key_properties.chromatic_scale = chromatic_scale_sharp;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 2;
      break;
    case MusicScale::TonicNote::A:
      current_key_properties.chromatic_scale = chromatic_scale_sharp;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 9;
      break;
    case MusicScale::TonicNote::E:
      current_key_properties.chromatic_scale = chromatic_scale_sharp;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 4;
      break;
    case MusicScale::TonicNote::B:
      current_key_properties.chromatic_scale = chromatic_scale_sharp;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 11;
      break;
    case MusicScale::TonicNote::G_Flat:
      current_key_properties.chromatic_scale = { "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "Cb" };
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 6;
      break;
    case MusicScale::TonicNote::F_Sharp:
      current_key_properties.chromatic_scale = { "C", "C#", "D", "D#", "E", "E#", "F#", "G", "G#", "A", "A#", "B" };
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 6;
      break;
    case MusicScale::TonicNote::C_Sharp:
      current_key_properties.chromatic_scale = { "B#", "C#", "D", "D#", "E", "E#", "F#", "G", "G#", "A", "A#", "B" };
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 1;
      break;
    case MusicScale::TonicNote::D_Flat:
      current_key_properties.chromatic_scale = chromatic_scale_flat;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 1;
      break;
    case MusicScale::TonicNote::A_Flat:
      current_key_properties.chromatic_scale = chromatic_scale_flat;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 8;
      break;
    case MusicScale::TonicNote::E_Flat:
      current_key_properties.chromatic_scale = chromatic_scale_flat;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 3;
      break;
    case MusicScale::TonicNote::B_Flat:
      current_key_properties.chromatic_scale = chromatic_scale_flat;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 10;
      break;
    case MusicScale::TonicNote::F:
      current_key_properties.chromatic_scale = chromatic_scale_flat;
      current_key_properties.roman_intervals = roman_intervals_major;
      current_key_properties.note_offset = 5;
      break;
  }
}
void MusicScale::calculateMusicKey(const KeyProperties& current_key_properties)
{
  std::string calculated_key_result {};
  uint8_t current_scale_increment { current_key_properties.note_offset };

  for (uint8_t index { 0 }; index < m_scale_increments.size(); ++index ) 
  {
    calculated_key_result += current_key_properties.roman_intervals[index];
    calculated_key_result += " "; 
    calculated_key_result += current_key_properties.chromatic_scale [ current_scale_increment ];
    calculated_key_result += ", ";
    current_scale_increment += m_scale_increments[ index ];
    current_scale_increment = current_scale_increment % current_key_properties.chromatic_scale.size();
  };
  
  std::cout << calculated_key_result << std::endl;
}

