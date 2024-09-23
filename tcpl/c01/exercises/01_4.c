/*
   Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include <stdio.h>

#define MIN_TEMP 0
#define MAX_TEMP 300

int main(void)
{
  float c = MIN_TEMP;
  printf("Table of Temperature in ºC and ºF Units\n");
  printf("\n\tºC\t\tºF\n");
  for (; c <= MAX_TEMP; c++)
  {
    float f = (9.0 / 5.0) * c + 32;
    printf("\t%3.0fºC\t\t%5.1fºF\n", c, f);
  }
  return 0;
}
