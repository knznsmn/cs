#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main()
{
  printf("Enter a couple of integers: ");
  int x = 0;
  int y = 0;
  scanf("%d%d", &x, &y);

  printf("\nYou entered %d and %d.\n", x, y);
  printf("%d\n", add(x, y));
  printf("%d\n", sub(x, y));
  printf("%d\n", mul(x, y));
  printf("%d\n", div(x, y));

}

int add(int x, int y)
{
  return x + y;
}
int sub(int x, int y)
{
  return x - y;
}
int mul(int x, int y)
{
  return x * y;
}
int div(int x, int y)
{
  return x / y;
}
