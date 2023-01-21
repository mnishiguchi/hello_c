#include <stdio.h>
#include <string.h>

int main()
{
  // 63 chars + '\0'
  char input[64];
  char hello[] = "hello";
  char world[8];
  strncpy(world, "world", 8);

  printf("Enter your name: ");

  // Read input
  // * Arguments
  //   0. input buffer
  //   1. max number of characters to read (including '\0')
  //   2. a file from which to read
  fgets(input, 64, stdin);

  // Remove a trailing newline character
  // https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input
  input[strcspn(input, "\r\n")] = 0;

  printf("%s, %s and %s!\n", hello, input, world);

  return 0;
}
