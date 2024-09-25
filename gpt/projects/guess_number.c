#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(0));
  char quit_key = 'q';
  char user_key;

  while ((user_key = getchar()) != 'q')
  {
    int imsorandom = rand() % 10;
    printf("random number = %d\n", imsorandom);
  }

  return 0;
}
