#include <stdio.h>

#define MY_NUMBER 123

int main()
{
  // read-only
  const char hello[] = "hello";
  const char world[] = "world";

  printf("%s %s %d\n", hello, world, MY_NUMBER);

  return 0;
}
