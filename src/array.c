#include <stdio.h>

int main()
{
  float temps[3] = {74.9, 73.3, 75.8};

  printf("Local temperatures\n");

  for (int x = 0; x < 3; x++)
  {
    printf("Station %d: %.1f\n", x, temps[x]);
  }

  return 0;
}
