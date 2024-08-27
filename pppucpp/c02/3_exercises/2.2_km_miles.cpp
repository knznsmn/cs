/*
   Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles. Hint: A mile is1.609 kilometers.
*/

#include <iostream>

int main()
{
  const double MILES_TO_KM = 1.609;
  double in_miles = 0;

  std::cout << "This program converts miles to km.\n"
            << "Enter a distance in miles:" << std::endl;

  while (std::cin >> in_miles) {
    double in_kilometers = in_miles * MILES_TO_KM;
    std::cout << in_miles << " miles is "
              << in_kilometers << "km." << std::endl;
  }
}
