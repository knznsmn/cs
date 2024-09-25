/*
*   Modify the temperature conversion program to print a heading above the table.
*/

#include <stdio.h>

#define MIN_TEMP 0
#define MAX_TEMP 300

int main(void)
{
  float f = MIN_TEMP;
  printf("Table of Temperature in ºF and ºC Units\n");
  printf("\n\tºF\t\tºC\n");
  for (; f <= MAX_TEMP; f++)
  {
    float c = (5.0 / 9.0) * (f - 32);
    printf("\t%3.0fºF\t\t%5.1fºC\n", f, c);
  }
  return 0;
}
