#include <stdio.h>

float calc_fahr(float n);
float calc_cels(float n);
float calc_list(float n);
void take_temp(int menu);

int main()
{
  printf("This program converts temp.\n");
  printf("What operation you fancy performing today?\n");
  printf("\t1. Convert Fahrenheit to Celsius.\n");
  printf("\t2. Convert Celsius to Fahrenheit.\n");
  printf("\t3. List shit.\n");

  printf("Enter the number of your choice: ");
  int choice;
  scanf("%d", &choice);
  switch (choice)
  {
    case 1:
      printf("\nConverting ºF to ºC.\n");
      take_temp(1);
      break;
    case 2:
      printf("\nConverting ºC to ºF.\n");
      take_temp(2);
      break;
    default:
      printf("\nUnable to fetch data...\n");
  }

  printf("\nThank you for using me.\n");

  return 0;
}

float calc_fahr(float n)
{ 
  return 9.0 / 5.0 * n + 32;
}

float calc_cels(float n)
{
  return (n - 32) * (5.0 / 9.0);
}

void take_temp(int menu)
{
  printf("Please enter the temperature: ");
  float temp;
  scanf("%f", &temp);
  switch (menu)
  { 
    case 1:
      printf("\n%.1fºF is equivalent to %.2fºC.\n", temp, calc_cels(temp));
      break;
    case 2:
      printf("\n%.0fºC is equivalent to %.2fºF.\n", temp, calc_fahr(temp));
      break;
    default:
      printf("\nUnable to fetch data...\n");
  }
}
