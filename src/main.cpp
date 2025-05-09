#include "scale.hpp"
#include <memory>
#include <stdlib.h>
#include <strings.h>

// consteval uint8_t CalculateSumOfIncrements(std::array<uint8_t, 7> scale_increments)
// {
//   uint8_t index { 0 };
//   uint8_t sum_of_array { 0 };
//   for (index = 0; index < scale_increments.size(); index++) 
//     sum_of_array += scale_increments[index]; 
//
//   return sum_of_array;
// }

int main (int argc, char *argv[]) 
{
  auto c_major { std::make_unique<MusicScale>(MusicScale::TonicNote::C, MusicScale::ScaleType::Major )};
  return 0;
}   
