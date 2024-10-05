#include <stdio.h>

int main() {
  int ndigit[10];
  int c;

  for (int i = 0; i < sizeof(ndigit) / sizeof(int); i++)
  {
    ndigit[i] = 0;
    printf("%d\n", ndigit[i]);
  }
  printf("sizeof(ndigit) is %lu.\n", sizeof(ndigit));
  printf("sizeof(int) is %lu.\n", sizeof(int));


  while ((c = getchar()) != EOF)
  {
    printf("++ndigit[c - '0' is %d.\n", ++ndigit[c-'0']);
  }

  return 0;
}
