#pragma once

#include <string_view>
#include <array>
#include <cstdint>
#include <sys/types.h>
#include <vector>

class MusicScale {
  public:
    enum class TonicNote 
    {
      C, G, D, A, E, B, G_Flat, F_Sharp, D_Flat, A_Flat, E_Flat, B_Flat, F
    };
    TonicNote m_key_tonic{}; 

  private:
    static constexpr std::array<std::string_view, 12> m_chromatic_scale_sharp{ "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" }; 
    static constexpr std::array<std::string_view, 12> m_chromatic_scale_flat{ "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "B" };
    std::vector<uint8_t> m_scale_increments { 2, 2, 1, 2, 2, 2, 1};
  
  public:
    MusicScale(TonicNote tonic_note);
    void startKeyGeneration();
  private:
    uint8_t determineChromaticOffsetAndKey();
    void calculateMusicKey(uint8_t scale_offset);
};

