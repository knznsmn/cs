#include <stdio.h>

int main()
{
  float unit_price = 0;
  int item_no = 0,
      dd, mm, yy;

  printf("\nEnter item no: ");
  scanf("%d", &item_no);

  printf("\nEnter the unit price: ");
  scanf("%f", &unit_price);

  printf("\nEnter purchase date (mm/dd/yyyy): ");
  scanf("%02d/%02d/%04d", &mm, &dd, &yy);

  printf("\n\nItem\t\tUnit\t\tPurchase");
  printf("\n\t\tPrice\t\tDate");
  printf("\n%d\t\t$%-4.2f\t\t%02d/%02d/%04d\n\n", item_no, unit_price, mm, dd, yy);

  return 0;
}
