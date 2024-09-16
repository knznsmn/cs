#include <stdio.h>

unsigned int sum_of_squares(unsigned int number);
unsigned int square_of_sum(unsigned int number);
unsigned int difference_of_squares(unsigned int number);

int main()
{
  int x = 0;
  printf("This program prints the difference of squares of the sum ");
  printf("\nand the square of the sum.\n");
  printf("Enter a number: ");
  scanf("%d", &x);

  printf("The sum of squares of %d is:\t\t%d\n", sum_of_squares(x));
  printf("The square of the sum of %d is:\t%d\n", square_of_sum(x));
  printf("The difference of the two sums is:\t%d\n", difference_of_squares(x));

  return 0;
}

unsigned int sum_of_squares(unsigned int number)
{
    int sum = 0;
    for (unsigned int i = 0; i <= number; i++)
    {
        sum += i * i;
    }
    return sum;
}
    
    
unsigned int square_of_sum(unsigned int number)
{
    int sum = 0;
    for (unsigned int i = 0; i <= number; i++)
    {
        sum += i;
    }
    return sum * sum;
}
unsigned int difference_of_squares(unsigned int number)
{
    int x = sum_of_squares(number),
        y = square_of_sum(number);

    return x > y ? x - y : y - x;
}

