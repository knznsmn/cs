/* Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis-plays it in the form yyyymmdd:
*/

#include <stdio.h>


int main()
{
  printf("Please enter a date (mm/dd/yyyy): ");
  int dd = 01,
      mm = 01,
      yy = 00;

  scanf("%d/%d/%d", &mm, &dd, &yy);

  printf("You entered the date %04d%02d%02d\n", yy, mm, dd);

  return 0;
}
