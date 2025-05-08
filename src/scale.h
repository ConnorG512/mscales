#pragma once

enum ScaleType 
{
  Major,
  Minor
};

struct MusicKey 
{
  const char initial_offset;
  enum ScaleType scale;
  const char jump_iterations[7];
  const char name[];
};  

struct MusicKey c_major = 
{
    0,
    Major,
    {2,2,1,2,2,2,1},
    "C Major",
};

extern void print_scale();
