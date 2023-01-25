#include <stdio.h>

int main()
{
  // a pointer array for four memory locations
  // Note: Don't modify the strings unless you really know what you are doing!!!
  char *names[4] = {
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
