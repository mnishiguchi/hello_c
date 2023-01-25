#include <stdio.h>

int main()
{
  char a;
  short b;
  int c;
  long d;
  float e;
  double f;

  struct stuff_t
  {
    int a;
    float b;
    char c[32];
  };
  struct stuff_t s;

  printf("## Byte sizes\n");
  printf("char     %2lu bytes\n", sizeof(a));
  printf("short    %2lu bytes\n", sizeof(b));
  printf("int      %2lu bytes\n", sizeof(c));
  printf("long     %2lu bytes\n", sizeof(d));
  printf("float    %2lu bytes\n", sizeof(e));
  printf("double   %2lu bytes\n", sizeof(f));
  printf("stuff_t  %2lu bytes\n", sizeof(s));
  printf("stuff_t  %2lu bytes\n", sizeof(struct stuff_t));
  printf("\n");

  printf("## Memory locations\n");
  printf("variable a is at %p\n", &a);
  printf("variable b is at %p\n", &b);
  printf("variable c is at %p\n", &c);
  printf("variable d is at %p\n", &d);
  printf("variable e is at %p\n", &e);
  printf("variable f is at %p\n", &f);
  printf("variable s is at %p\n", &s);

  return 0;
}
