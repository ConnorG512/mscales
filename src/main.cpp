#include "scale.hpp"
#include <memory>
#include <stdlib.h>
#include <strings.h>

int main (int argc, char *argv[]) 
{
  auto major_scale { std::make_unique<MusicScale>(MusicScale::TonicNote::D) };
  major_scale->startKeyGeneration();
  return 0;
}   
