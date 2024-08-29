/*
   Write a program to test an integer value to determine if it is odd or even. As always, make
   sure your output is clear and complete. In other words, don’t just output yes or no. Your out-
   put should stand alone, like The value 4 is an even number. Hint: See the remainder (modulo)
   operator in §2.4.
*/

#include <iostream>

int main()
{
  std::cout << "This program determines if the integer value is odd or even.\n" << std::endl;

  std::cout << "Please enter an integer: " << std::endl;
  int number {0};
  
  while (std::cin >> number)
  {
    if (number % 2 == 0)
    {
      std::cout << number << " is an even number.\n";
    }
    else
    {
      std::cout << number << " is an odd number.\n";
    }
  }
}
