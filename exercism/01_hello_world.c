#include <stdio.h>

const char *hello(void)
{
  return "Hello, World!";
}

int main()
{
  printf("%s\n", hello());

  return 0;
}
