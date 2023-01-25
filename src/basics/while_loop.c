#include <stdio.h>
#include <ctype.h>

int main()
{
  char c;

  printf("Type something and press ENTER\n");

  // Repeat until the character input is a new line.
  while (c != '\n')
  {
    c = getchar();
    c = toupper(c);
    putchar(c);
  }

  return 0;
}
