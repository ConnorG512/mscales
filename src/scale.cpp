#include <iostream>
#include <ostream>
#include <string>

#include "scale.hpp"

MusicScale::MusicScale(TonicNote tonic_note, ScaleType scale)
  : m_tonic { tonic_note }, m_scale { scale } {};

void MusicScale::printTitlebar() 
{
  std::string tonic_note {};
  std::string scale {};

  switch (m_tonic) {
    case MusicScale::TonicNote::C:
      tonic_note = "C";
    case MusicScale::TonicNote::C_sharp:
      tonic_note = "C#";
    case MusicScale::TonicNote::D_flat:
      tonic_note = "Db";
    case MusicScale::TonicNote::D:
      tonic_note = "D";
    case MusicScale::TonicNote::D_sharp:
      tonic_note = "D#";
    case MusicScale::TonicNote::E_flat:
      tonic_note = "Eb";
    case MusicScale::TonicNote::E:
      tonic_note = "E";
    case MusicScale::TonicNote::F:
      tonic_note = "F";
    case MusicScale::TonicNote::F_sharp:
      tonic_note = "F#";
    case MusicScale::TonicNote::G_flat:
      tonic_note = "Gb";
    case MusicScale::TonicNote::G:
      tonic_note = "G";
    case MusicScale::TonicNote::G_sharp:
      tonic_note = "G#";
    case MusicScale::TonicNote::A_flat:
      tonic_note = "Ab";
    case MusicScale::TonicNote::A:
      tonic_note = "A";
    case MusicScale::TonicNote::A_sharp:
      tonic_note = "A#";
    case MusicScale::TonicNote::B_flat:
      tonic_note = "Bb";
    case MusicScale::TonicNote::B:
      tonic_note = "B";
  }
  switch (m_scale) {
    case MusicScale::ScaleType::Major:
      scale = "Major";
    case MusicScale::ScaleType::Minor:
      scale = "Minor";
  }
  
}
void MusicScale::calculateMusicKey()
{
  // TODO
  std::cout << "calculateMusicKey called!" << std::endl;

  //  std::cout << "scale_increments size: " << scale_increments.size() << std::endl;
  // while (scale_position <= scale_increments.size()) {
  //   std::cout << tonic_scale_sharp [ scale_position ] << " ";
  //   scale_position += scale_increments[ index ];
  //   index += 1;
  //   if (scale_position >= 12) {
  //     scale_position = 0;
  //     std::cout << tonic_scale_sharp [ scale_position ] << std::endl;
  //   }
  // }
}

