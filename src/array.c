#include <stdio.h>

int main()
{
  float numbers[3] = {74.9, 73.3, 75.8};
  float *numbers_ptr;

  // No & needed for an array

  numbers_ptr = numbers;

  for (int i = 0; i < 3; i++)
  {
    printf("Element %d: %.1f\n", i, numbers[i]);
  }

  printf("\n");

  for (int i = 0; i < 3; i++)
  {
    printf("Element %d: %.1f\n", i, *(numbers_ptr + i));
  }

  printf("\n");

  for (int i = 0; i < 3; i++)
  {
    printf("Element %d: %.1f\n", i, *numbers_ptr);
    numbers_ptr++;
  }

  return 0;
}
