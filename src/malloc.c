#include <stdio.h>
#include <stdlib.h>

#define N_SCORES 4

int main()
{
  int *scores;
  int n_bytes = sizeof(int) * N_SCORES;

  // Allocate a chunk of memory to store integers
  scores = malloc(n_bytes);

  // Always ensure that memory has been allocated
  if (NULL == scores)
  {
    puts("Unable to allocate memory");
    return 1;
  }
  else
  {
    printf("%d bytes of memory allocated at %p\n", n_bytes, scores);
  }

  *(scores + 0) = 100;
  *(scores + 1) = 97;
  *(scores + 2) = 105;
  *(scores + 3) = 110;

  for (int i = 0; i < N_SCORES; i++)
  {
    printf("%d %p %d\n", i, scores + i, *(scores + i));
  }

  return 0;
}
