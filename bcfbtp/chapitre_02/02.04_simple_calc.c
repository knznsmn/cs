#include <stdio.h>

int main()
{
  printf("This progral calculates the sum of pets.\n");

  int total_pets;
  int cats;
  int dogs;
  int ponies;
  int others;

  cats = 2;
  dogs = 1;
  ponies = 1;
  others = 46;

  total_pets = cats + dogs + ponies + others;
  printf("We have %i pets in total.\n", total_pets);

  return 0;
}
