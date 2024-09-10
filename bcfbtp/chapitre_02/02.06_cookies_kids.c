#include <stdio.h>

int main()
{
  int cookies = 45;
  int kids = 7;
  int cookies_per_kids = cookies / kids;
  int remaining_cookies = cookies % kids;

  printf("There are %d cookies and %d kids.\n", cookies, kids);
  printf("Each kid gets %d cookies and %d cookies left.\n", cookies_per_kids, remaining_cookies);
  return 0;
}

