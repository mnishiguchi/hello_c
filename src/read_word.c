#include <stdio.h>

int main()
{
  // 63 chars + '\0'
  char input[64];

  printf("Enter your name: ");

  // Read only one word, ignoring the rest in the input stream
  scanf("%s", input);

  printf("Hello, %s!\n", input);

  return 0;
}
