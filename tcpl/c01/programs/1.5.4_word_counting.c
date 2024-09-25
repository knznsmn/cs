/*
    Write a program to count blanks, tabs, words, and newlines
*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int c, nt, ns, nl, nw, nc, state;
  printf("Enter text to count blanks, tabs, words, and newlines\n");
  nt = ns = nl = nw = nc = 0;
  state = OUT;

  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\t') ++nt;
    if (c == ' ') ++ns;
    if (c == '\n') ++nl;

    if (c == '\t' || c == ' ' || c == '\n')
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }

  printf("\n\nNo. of characters: %d", nc);
  printf("\nNo. of tabs: %d", nt);
  printf("\nNo. of spaces: %d", ns);
  printf("\nNo. of newlines: %d", nl);
  printf("\nNo. of words: %d\n", nw);
}