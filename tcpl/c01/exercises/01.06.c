/*
  Verify that the expressiongetchar() != EOFis0or1. 2
*/
#include <stdio.h>

int main(void)
{
  int c;
  // printf("%d\n", c = getchar() != EOF);
  while ((c = getchar() != EOF))
  {
    printf("%d\n", c = getchar() != EOF);
  }

  return 0;
}
