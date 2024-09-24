#include <stdio.h>

int main()
{
  long long int rice = 1;

  for (int i = 1; i <= 64; i++)
  {
    printf("%lld rice in square %d.\n", rice, i);
    rice += rice;
  }

  return 0;
}
