#include <stdio.h>

int main()
{
  // A string array is a 2-dimentional array
  char names[8][8] = {
      "Ant",
      "Bee",
      "Cat",
      "Duck"};

  for (int i = 0; i < 4; i++)
  {
    printf("%d %p %s\n", i, names[i], names[i]);
  }

  return 0;
}
