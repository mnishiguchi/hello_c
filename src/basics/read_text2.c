#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chomp(char *input);
void shout(char *input);

int main()
{
  // 63 chars + '\0'
  char input[64];

  printf("Enter something: ");

  fgets(input, 64, stdin);

  chomp(input);
  printf("%s\n", input);

  shout(input);
  printf("%s\n", input);

  return (0);
}

// Remove a trailing newline character
void chomp(char *input)
{
  input[strcspn(input, "\r\n")] = '\0';
}

void shout(char *input)
{
  // Repeat until a character is '\0'
  while (*input)
  {
    // Update the character at current location the pointer is pointing
    *input = toupper(*input);

    // Increment the pointer to point to a next character
    input++;
  }
}
