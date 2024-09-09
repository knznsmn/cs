#include <stdio.h>

int main(void)
{
  printf("This program converts Fahrenheit to Celsius.\n");
  printf("\n");
  
  float fahrenheit = 0;

  printf("Enter the temperature in Fahrenheit: ");
  scanf("%d", &fahrenheit);
  float celsius = (5.0/9.0) * (fahrenheit - 32.0);
  printf("%.0fF is %5.2f degrees Celsius.\n", fahrenheit, celsius);

  return 0;
}
