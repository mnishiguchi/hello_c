#include <stdio.h>
#include <string.h>

// building a string (3 steps)
// - 1. create a char buffer large enough to hold the new string
// - 2. copy the first string into the char buffer
// - 3. append the second string onto the first string in the char buffer
int main()
{
  char first[] = "hello, ";
  char second[] = "world";
  char buffer[64];

  strcpy(buffer, first);
  strcat(buffer, second);

  printf("%s!\n", buffer);

  return 0;
}
