#include <stdio.h>

int main(void)
{
  printf("This program display a table of temperature in Fahrenheit to Celsius.\n");

  float minimum_fahrenheit = 0;
  float maximum_fahrenheit = 0;
  float steps = 1;

  printf("Enter the mininum temperature in Fahrenheit: ");
  scanf("%f", &minimum_fahrenheit);

  printf("\nEnter the maximum temperature in Fahrenheit: ");
  scanf("%f", &maximum_fahrenheit);

  printf("\nEnter the increment between values: ");
  scanf("%f", &steps);

  while (minimum_fahrenheit <= maximum_fahrenheit)
  {
    float celsius = (5/9.0) * (minimum_fahrenheit - 32);
    printf("\t%.0f\t%4.2f\n", minimum_fahrenheit, celsius);
    minimum_fahrenheit += steps;
  }

  return 0;
}
