/*
    Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx:
*/

#include <stdio.h>

int main()
{
  printf("Enter phone number [(xxx) xxx-xxxx]: ");

  int area_code,
      tel_prefix,
      line_no;

  scanf("(%03d) %3d-%4d", &area_code, &tel_prefix, &line_no);
  printf("\nYou entered %d.%d.%d\n", area_code, tel_prefix, line_no);

  return 0;
      
}
