#include <iostream>
#include <cmath>

int main()
{
  std::cout << "Please enter a floating-point value: ";
  // double number = 0;
  int number = 0;
  std::cin >> number;
  std::cout << "Entered number is " << number << " .\n"
    << "3 times " << number << " is " << 3 * number << ".\n"
    << "Number squared is " << number * number << ".\n"
    << "Half of the number is " << number / 2 << ".\n"
    << "Square root of the number is " << sqrt(number) << ".\n";
}
