/*
  Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
Enter an amount: 100.00 With tax added: $105.00.
*/

#include <stdio.h>

int main()
{
  printf("\nEnter an amount:\t");
  float amount;
  scanf("%f", &amount);

  float tax = 0.05;
  float total = amount + (amount * tax);
  printf("______________________________\n");
  printf("With tax added:\t\t%.2f\n\n", total);

  return 0;
}
