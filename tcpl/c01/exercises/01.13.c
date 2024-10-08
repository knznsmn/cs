/*
  Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/
#include <stdio.h>

int main()
{
  int c;
  int word;
  int white;

  while ((c = getchar()) =! EOF)
  {
    // Check if c = white space
    if (c == ' ' || c == '\n')
    {
      printf("")
    }
    // Else count until white space
    else
    {
      ++white;
    }
  }
  return 0;
}
