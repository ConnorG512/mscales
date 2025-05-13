#include "scale.hpp"
#include <cstdint>
#include <string_view>


namespace CommandParser {
  void checkForPassableArguementNumber(uint8_t current_command);
  void parseCommand(std::string_view current_command);
  void executeScaleCommand(MusicScale::TonicNote tonic_note);
};  
