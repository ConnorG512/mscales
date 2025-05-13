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
      C, G, D, A, E, B, G_Flat, F_Sharp, C_Sharp, D_Flat, A_Flat, E_Flat, B_Flat, F
    };
    TonicNote m_key_tonic {}; 

  private:
    struct KeyProperties 
    {
      std::array<std::string_view, 12>chromatic_scale {};
      std::array<std::string_view, 7> roman_intervals {};
      uint8_t note_offset { 0 };
    };
    std::vector<uint8_t> m_scale_increments { 2, 2, 1, 2, 2, 2, 1};
  
  public:
    MusicScale(TonicNote tonic_note);
    void startKeyGeneration();
  private:
    void determineChromaticOffsetAndKey(KeyProperties& current_key_properties);
    void calculateMusicKey(const KeyProperties& current_key_properties);
    void calculateKeyChords(const KeyProperties& current_key_properties);
};

