/*
    Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
*/

#include <stdio.h>

int main()
{
  printf("How much dollars you have in your wallet? ");
  float total_money;
  scanf("%f", &total_money);
  float change;
  float bills_20 = total_money / 20.0f;
  change = total_money % 20.0f;
  float bills_10 = change / 10.0f;
  change = bills_10 % 10.0f;
  float bills_05 = change / 5.0f;
  change = bills_05 % 5.0f;
  //int bills_01 = change / 1;
  //change = (bills_01 % 1) * 10;

  printf("\n\n");
  printf("$20 bills:\t%.0f\n", bills_20);
  printf("$10 bills:\t%.0f\n", bills_10);
  printf(" $5 bills:\t%.0f\n", bills_05);
  printf(" $1 bills:\t%.0f\n", change);
  printf("\n\n");

  return 0;
}
