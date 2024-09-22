#include <stdio.h>

int main()
{
  float fahr;
  float ratio = 5.0 / 9.0;
  float celsius = ratio * (fahr + 32);
  int max_temp;

  printf("This program converts temp.\n");
  printf("What operation you fancy performing today?\n");
  printf("\t1. Convert Fahrenheit to Celsius.\n");
  printf("\t2. Convert Celsius to Fahrenheit.\n");
  printf("\t3. List shit.\n");

  char choice;
  scanf("%c", &choice);
  while (choice != 'q')
  {
    switch (choice)
    {
      case '1':
        printf("Switch to 1.\n");
        break;
      case '2':
        printf("Switch to 2.\n");
        break;
      default:
        printf("Switch to default.\n");
        break;
    }
  }
  printf("Outside of the loop now.\n");

  return 0;
}
