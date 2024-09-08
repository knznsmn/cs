#include <stdio.h>

int main()
{
  int cookies = 5;
  int eaten = 0;
  int cookies_eaten = 0;
  int cookies_calories = 125;

  printf("I have %d cookies.\n", cookies);

  eaten = 2;
  cookies_eaten += eaten;
  cookies -= eaten;
  printf("I have eaten %d cookies. ", eaten);
  printf("There are %d cookies left.\n", cookies);

  eaten = 3;
  cookies_eaten += eaten;
  cookies -= eaten;
  printf("I have eaten %d cookies. ", eaten);
  printf("There are %d cookies left.\n", cookies);

  cookies_calories *= cookies_eaten;
  printf("Total energy consumed is %d calories.\n", cookies_calories);
}
