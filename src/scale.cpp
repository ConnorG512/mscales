#include <iostream>
#include <ostream>
#include <string>
#include <format>

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
      break;
    case MusicScale::TonicNote::C_sharp:
      tonic_note = "C#";
      break;
    case MusicScale::TonicNote::D_flat:
      tonic_note = "Db";
      break;
    case MusicScale::TonicNote::D:
      tonic_note = "D";
      break;
    case MusicScale::TonicNote::D_sharp:
      tonic_note = "D#";
      break;
    case MusicScale::TonicNote::E_flat:
      tonic_note = "Eb";
      break;
    case MusicScale::TonicNote::E:
      tonic_note = "E";
      break;
    case MusicScale::TonicNote::F:
      tonic_note = "F";
      break;
    case MusicScale::TonicNote::F_sharp:
      tonic_note = "F#";
      break;
    case MusicScale::TonicNote::G_flat:
      tonic_note = "Gb";
      break;
    case MusicScale::TonicNote::G:
      tonic_note = "G";
      break;
    case MusicScale::TonicNote::G_sharp:
      tonic_note = "G#";
      break;
    case MusicScale::TonicNote::A_flat:
      tonic_note = "Ab";
      break;
    case MusicScale::TonicNote::A:
      tonic_note = "A";
      break;
    case MusicScale::TonicNote::A_sharp:
      tonic_note = "A#";
      break;
    case MusicScale::TonicNote::B_flat:
      tonic_note = "Bb";
      break;
    case MusicScale::TonicNote::B:
      tonic_note = "B";
      break;
  }
  switch (m_scale) {
    case MusicScale::ScaleType::Major:
      scale = "Major";
      break;
    case MusicScale::ScaleType::Minor:
      scale = "Minor"; 
      break;
  }
  std::cout << std::format("{} {}:", tonic_note, scale) << std::endl;
}
void MusicScale::calculateMusicKey()
{
  // TODO
  std::cout << "TODO: calculateMusicKey called!" << std::endl;

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

