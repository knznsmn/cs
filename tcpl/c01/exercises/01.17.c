/*
  Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
*/
#include <stdio.h>

double temp_convert(double temp, char* unit);

int main(int argc, char argv[])
{
  printf("%s\n", &argv[0]);
  printf("%s\n", &argv[1]);

  retun 0;
}

double temp_convert(double temp, char* unit)
{
  if (&unit == 'fahr')
    return 5.0 / 9.0 * (temp - 32);
  else if (&unit == 'cels')
      return 9.0 / 5.0 + 32;
}
