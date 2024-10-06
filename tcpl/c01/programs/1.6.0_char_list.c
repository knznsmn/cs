#include <stdio.h>

#define min 0
#define max 255

int main()
{
  //int min = 0;
  //int max = sizeof(char);
  printf("This program lists all c in range.\n");

  printf("\tINT\t\tCHAR\n");
  for (int i = min; i <= max; i++)
  {
    printf("\t%3d\t=\t%c\n", i, i);
  }
  return 0;
}
