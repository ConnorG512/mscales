#pragma once

#include <string_view>
#include <array>
#include <cstdint>

class MusicScale {
  public:
    enum class TonicNote 
    {
      C, C_sharp, D_flat, D,
      D_sharp, E_flat, E, F,
      F_sharp, G_flat, G, G_sharp,
      A_flat, A, A_sharp, B_flat,
      B
    };
    enum class ScaleType
    {
      Major,
      Minor
    };
    
    TonicNote m_tonic { MusicScale::TonicNote::C };
    ScaleType m_scale { MusicScale::ScaleType::Major };

  private:
    static constexpr std::array<std::string_view, 11> m_chromatic_scale_sharp{ "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B" }; 
    static constexpr std::array<std::string_view, 11> m_chromatic_scale_flat{ "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "B" };
    std::array<uint8_t, 7> m_scale_increments { 2, 2, 1, 2, 2, 2, 1};
  
  public:
  MusicScale(TonicNote tonic_note, ScaleType scale);
  void printTitlebar();
  void calculateMusicKey();
};





