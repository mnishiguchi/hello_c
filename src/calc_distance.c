#include <stdio.h>
#include <math.h>

#include "io_utils.c"

#define VALUE_MIN -100
#define VALUE_MAX 100

int main()
{
  double x = get_double("Enter the x value: ", VALUE_MIN, VALUE_MAX);
  double y = get_double("Enter the y value: ", VALUE_MIN, VALUE_MAX);

  double d = sqrt(pow(x, 2) + pow(x, 2));

  printf("Distance is %lf\n", d);

  return 0;
}
