#include <stdio.h>

void plus100(int *number);

int main()
{
  int value = 1;
  int *value_ptr = &value;

  printf("%p %d\n", &value, value);

  plus100(&value);
  printf("%p %d\n", &value, value);

  plus100(value_ptr);
  printf("%p %d\n", value_ptr, *value_ptr);

  return 0;
}

// Accepts a pointer variable that stores a memory location.
// We can pass either:
// - a regular variable prefixed with &
// - an initialized pointer variable
void plus100(int *number)
{
  // Manipulage the value directly in memory
  *number = *number + 100;
}
