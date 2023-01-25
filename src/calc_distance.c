#include <stdio.h>
#include <math.h>

#define VALUE_MIN -100
#define VALUE_MAX 100

int is_valid_range(double input, double min, double max)
{
  if (input < min)
  {
    printf("The value must be at least %lf\n", min);
    return 0;
  }

  if (input > max)
  {
    printf("The value must be at most %lf\n", max);
    return 0;
  }

  return 1;
}

double get_double(char *prompt, double min, double max)
{
  double input;

  do
  {
    printf("%s", prompt);
    scanf("%lf", &input);

  } while (!is_valid_range(input, min, max));

  return input;
}

int main()
{
  double x = get_double("Enter the x value: ", VALUE_MIN, VALUE_MAX);
  double y = get_double("Enter the y value: ", VALUE_MIN, VALUE_MAX);

  double d = sqrt(pow(x, 2) + pow(x, 2));

  printf("Distance is %lf\n", d);

  return 0;
}
