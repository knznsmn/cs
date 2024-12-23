#include "difference_of_squares.h"

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





#ifndef DIFFERENCE_OF_SQUARES_H
#define DIFFERENCE_OF_SQUARES_H

unsigned int sum_of_squares(unsigned int number);
unsigned int square_of_sum(unsigned int number);
unsigned int difference_of_squares(unsigned int number);

#endif

