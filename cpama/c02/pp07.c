/*
    Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
*/

#include <stdio.h>

int main()
{
  printf("How much dollars you have in your wallet? ");
  int total_money;
  scanf("%d", &total_money);
  int change;
  int bills_20 = total_money / 20;
  change = total_money % 20;
  int bills_10 = change / 10;
  change = change % 10;
  int bills_05 = change / 5;
  change = change % 5;
  //int bills_01 = change / 1;
  //change = (bills_01 % 1) * 10;

  printf("\n\n");
  printf("$20 bills:\t%d\n", bills_20);
  printf("$10 bills:\t%d\n", bills_10);
  printf(" $5 bills:\t%d\n", bills_05);
  printf(" $1 bills:\t%d\n", change);
  printf("\n\n");

  return 0;
}
