#include <cstdint>
#include <string_view>

class CommandParser {
  // Member Data
  private:
  public:
  
  // Member methods
  private: 
    bool parseStringArgument(std::string_view& command);
    void countArgumentNum(uint8_t argument_num);
};
