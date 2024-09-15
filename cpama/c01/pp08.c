/*
    Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:
*/

#include <stdio.h>

int main()
{
  printf("\n\nEnter amount of loan: ");

  float loan = 0;
  scanf("%f", &loan);
  printf("\nEnter interest rate: ");
  float interest_rate = 0;
  scanf("%f", &interest_rate);
  printf("\nEnter monthly payment: ");
  float monthly_payment = 0;
  scanf("%f", &monthly_payment);

  float monthly_interest = (interest_rate / 12) / 100; 
  loan += loan * monthly_interest;
  loan -= monthly_payment;
  printf("Balance remaining after first payment: %.2f.\n", loan);

  // loan = loan + loan * interest_rate;
  loan += loan * monthly_interest;
  loan -= monthly_payment;
  printf("Balance remaining after second payment: %.2f.\n", loan);

  // loan = loan + loan * interest_rate;
  loan += loan * monthly_interest;
  loan -= monthly_payment;
  printf("Balance remaining after third payment: %.2f.\n", loan);

  return 0;
}
