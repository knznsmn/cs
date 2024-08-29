/*
   Write a program that prompts the user to enter two integer values. Store these values in int
   variables named val1 and val2. Write your program to determine the smaller, larger, sum, dif-
   ference, product, and ratio of these values and report them to the user.
*/

#include <iostream>

int main()
{
  int val1 = 0,
      val2 = 0;

  std::cout << "Enter two integers:\n";
  std::cin >> val1 >> val2;

  int smaller,
      larger;

  if (val1 < val2) {
    std::cout << val1 << " is smaller than " << val2 << ".\n";
    smaller = val1;
    larger = val2;
  }
  else {
    std::cout << val1 << " is bigger than " << val2 << ".\n";
    smaller = val2;
    larger = val1;
  }

  std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << ".\n";
  std::cout << "The difference of " << larger << " and " << smaller << " is " << larger - smaller << "\n";
  std::cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << ".\n";

  std::cout << "The ratio of " << larger << " and " << smaller << " is " << larger / smaller << ".\n";
}
