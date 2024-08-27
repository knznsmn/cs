/*
   TRY THIS
   Run this program with a variety of inputs:
   • Small values (e.g., 2 and 3).
   • Large values (larger than 127, larger than 1000).
   • Negative values.
   • 56, 89, and 128.
   • Non-integer values (e.g., 56.9 and 56.2).
   You’ll ﬁnd that many inputs produce ‘‘unreasonable’’ results when converted. Basi-
   cally, we are trying to put a gallon into a pint pot (about 4 liters into a 500ml glass).
*/

#include <iostream>

int main()
{
  std::cout << "This program converts double-point values to other types.\n"
            << "Enter a digit:"<< std::endl;
  double d = 0;
  while (std::cin >> d) {

    // Squeeze a floating-point value into int
    int i = d; 

    // Now, squeeze an int into a char
    char c = i;

    std::cout << "d = " << d << "\n"
              << "i = " << i << "\n"
              << "c = " << c << "\n"
              << std::endl;
  }
}
