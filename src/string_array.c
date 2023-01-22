#include <stdio.h>

int main()
{
  // A string array is a 2-dimentional array
  char names[8][8] = {
    "Ant",
    "Bee",
    "Cat",
    "Duck"
  };

  int x;

  for (x = 0; x < 4; x++)
  {
    printf("%s\n", names[x]);
  }

  return 0;
}
