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


// MusicKey* GetMusicalKey(Note baseNote, bool major);
