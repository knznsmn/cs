#include <stdio.h>

int main()
{
  printf("This program counts new line.\n");

  int c,
      nl = 0,
      nc = 0;

  while ((c = getchar()) != EOF)
  {
    nc++;
    putchar(c);
    if (c == '\n')
    {
      nl++;
    }
  }
  printf("Chars = %d\nNewlines = %d.\n", nc, nl);
  return 0;
}
