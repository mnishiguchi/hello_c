#include <stdio.h>

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
