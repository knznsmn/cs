/*
   TRY THIS
   Get this little program to run. Then, modify it to read an int rather than a double.
   Also, ‘‘exercise’’ some other operations, such as the modulo operator, %. Note that
   for ints / is integer division and % is remainder (modulo), so that 5/2 is 2 (and not 2.5
   or 3) and 5%2 is 1. The deﬁnitions of integer ∗, /, and % guarantee that for two posi-
   tive ints a and b we have a/b ∗ b + a%b == a.
*/

#include <iostream>
#include <cmath>

int main()
{
  std::cout << "Please enter a floating-point value: ";
  // double number = 0;
  int number = 0;
  std::cin >> number;
  std::cout << "Entered number is " << number << ".\n"
            << "3 times " << number << " is " << 3 * number << ".\n"
            << "Number squared is " << number * number << ".\n"
            << "Half of the number is " << number / 2 << ".\n"
            << "Square root of the number is " << sqrt(number) << ".\n";
}
