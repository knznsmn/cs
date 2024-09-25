#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year);

int main()
{
  printf("This program tells if the year is a leap year or not.");
  printf("\nEnter a year: ");

  int year;
  scanf("%d", &year);
  printf("The year %d is %sa leap year.\n", year, leap_year(year) ? "" : "not ");

  return 0;
}
bool leap_year(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 == 0)
            return true;
        else if (year % 100 == 0)
            return false;
        else
            return true;
    }
    else
        return false;
}
