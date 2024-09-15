/*
    Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:
((((3x + 2)x – 5)x – 1)x + 7)x – 6
*/

#include <stdio.h>

int main()
{
  printf("This calculates the polynomial 3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6.\n");

  printf("Enter a value for x: ");
  int x;
  scanf("%d", &x);
 // int value = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
  int value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) *x - 6;

  printf("The value of x = %d.\n", value);

  return 0;
}
