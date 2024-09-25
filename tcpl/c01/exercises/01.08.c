/*
    Write a program to count blanks, tabs, and newlines
*/
#include <stdio.h>

int main()
{
  int c,
      n_tab = 0,
      n_space = 0,
      n_nline = 0,
      n_chars = 0;

  while ((c = getchar()) != EOF)
  {
    c++;
    if (c == '\t')
      n_tab++;
    if (c == ' ')
      n_space++;
    if (c == '\n')
      n_nline++;
  }
  printf("tabs:\t%d\n", n_tab);
  printf("spaces:\t%d\n", n_space);
  printf("newlines:\t%d\n", n_nline);

  return 0;
}
