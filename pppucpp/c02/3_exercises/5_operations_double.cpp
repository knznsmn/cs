/*
   Modify the program above to ask the user to enter floating-point values and store them in
   double variables. Compare the outputs of the two programs for some inputs of your choice.
   Are the results the same? Should they be? What’s the difference?
*/

#include <iostream>

int main()
{
  double val1 = 0,
      val2 = 0;

  std::cout << "Enter two integers:\n";
  std::cin >> val1 >> val2;

  double smaller,
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
