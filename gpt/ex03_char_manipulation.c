#include <stdio.h>

int main()
{
  printf("Enter a character: ");
  char c;
  scanf("%c", &c);

  printf("\n%c in ASCII is %d\n", c, c);
  
  if (c >= 97 || c <= 122)
    printf("Adding 32 to %c makes it %c.\n", c, c - 32);
  else if (c >= 65 || c <= 90)
    printf("Adding 32 to %c makes it %c.\n", c, c + 32);
  else
    printf("Nice\n");

  return 0;
}
