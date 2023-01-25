#include <stdio.h>
#include <ctype.h>

int main()
{
  printf("Type something and press ENTER\n");

  // Repeat until the character input is a new line.
  for (char c; c != '\n'; NULL)
  {
    c = getchar();
    c = toupper(c);
    putchar(c);
  }

  return 0;
}
