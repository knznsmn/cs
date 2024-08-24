#include <iostream>
#include <string>

int main()
{
  std::cout << "What is your name?\n";
  std::string name;
  std::cin >> name;

  std::cout << "How old are you?\n";
  int age;
  std::cin >> age;

  std::cout << "Hello, " << name << "! " << "You're " << age << " years old.\n";

  const double MONTHS_IN_A_YEAR = 12;
  int age_in_months = age * MONTHS_IN_A_YEAR; 
  std::cout << "That means you're "<< age_in_months << " months old.\n";
}
