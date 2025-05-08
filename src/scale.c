#include <stdio.h>

#include "scale.h"

struct MusicKey c_major = 
{
    0,
    Major,
    {2,2,1,2,2,2,1},
    "C Major",
};

extern void print_scale()
{
  printf("Hello\n");
}

// extern void print_scale(struct MusicKey* key)
// {
//   printf("%s", key->name);
// }
