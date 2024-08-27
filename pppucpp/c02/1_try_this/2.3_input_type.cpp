/*
   TRY THIS
   Get the ‘‘name and age’’ example to run. Then, modify it to write out the age in
   number of months: read the input in years and multiply (using the ∗ operator) by 12.
   Read the age into a double to allow for children who can be very proud of being ﬁve
   and a half years old rather than just ﬁve.
*/

#include <iostream>

int main()
{
  std::cout << "Please enter your first name and age." << std::endl;
  std::string first_name = "???";
  int age = -1;
  std::cin >> first_name >> age;

  const int IN_MONTHS = 12;
  double age_in_months = age * IN_MONTHS; 

  std::cout << "Hello " << first_name << "! You're " << age_in_months << " months old." << std::endl;
}
