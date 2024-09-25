/*
  Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank.
*/

#include <stdio.h>

int main()
{
  printf("\nThis program copy its input to its output and trims extra spaces.\n");
  
  int c, space;
  space = 0;

  while ((c = getchar()) != EOF)
  {
    // Detects if c is space or not
    if (c == ' ')
    {
      if (space == 0)
      {
        putchar(c);
        ++space;
      }
      else if (space > 1)
        --space;
    }
    // If not, print c and reset the counter
    else
    {
      putchar(c);
      space = 0;
    }
  }

  printf("\nThanks for using this program.\n");

  return 0;
}
