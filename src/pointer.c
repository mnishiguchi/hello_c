#include <stdio.h>

int main()
{
  // Declare a number
  int number;
  // Declare a pointer for the number
  int *ptr;

  // Initialize the number
  number = 123;
  // Initialize the pointer with the address of the number
  ptr = &number;

  printf("The address\n");
  printf("  &number\t %p\n", &number);
  printf("  ptr    \t %p\n", ptr);

  printf("The value\n");
  printf("  number \t %d\n", number);
  printf("  *ptr   \t %d\n", *ptr);

  return (0);
}
