#include <stdio.h>

int main()
{
  printf("Counts the digits, white spaces, & others.\n");
  int digits[10];
  int c, nwhites, nothers;

  nwhites = nothers = 0;
  for (int i = 0; i < 10; i++)
  {
    digits[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
    {
      digits[c] = c;
    }
    if (c == ' ' || c == '\t' || c == '\n')
    {
      nwhites++;
    }
    else
    {
      nothers++;
    }
  }
  for (int i = 0; i < sizeof(digits)/sizeof(int); i++)
  {
    if (i == sizeof(digits)/sizeof(int))
      printf("%d.\n", digits[i]);
    else
      printf("%d, ", digits[i]);
  }
  printf("Number of white spaces are %d.\n", nwhites);
  printf("Number of other characters are %d.\n", nothers);
  return 0;
}
