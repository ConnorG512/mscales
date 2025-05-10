#include "scale.hpp"
#include <memory>
#include <stdlib.h>
#include <strings.h>

int main (int argc, char *argv[]) 
{
  auto c_major { std::make_unique<MusicScale>(MusicScale::TonicNote::C, MusicScale::ScaleType::Major )};
  c_major->printTitlebar();
  c_major->calculateMusicKey();
  return 0;
}   
