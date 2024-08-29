/*
   Write a program that converts spelled-out numbers such as ‘‘zero’’ and ‘‘two’’ into digits,
   such as 0 and 2. When the user inputs a number, the program should print out the corre-
   sponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the
   user enters something that doesn’t correspond, such as stupid computer!.
*/

#include <iostream>

int main()
{
  std::cout << "This program converts spelled-out numbers into digits.\n"
            << "Please spell out a number: \n";

  std::string number_string = "";
  while (std::cin >> number_string)
  {
    if (number_string == "zero")
    {
      std::cout << 0 << std::endl;
    }
    else if (number_string == "one")
    {
      std::cout << 1 << std::endl;
    }
    else if (number_string == "two")
    {
      std::cout << 2 << std::endl;
    }
    else if (number_string == "three")
    {
      std::cout << 3 << std::endl;
    }
    else if (number_string == "four")
    {
      std::cout << 4 << std::endl;
    }
    else if (number_string == "five")
    {
      std::cout << 5 << std::endl;
    }
    else if (number_string == "six")
    {
      std::cout << 6 << std::endl;
    }
    else if (number_string == "seven")
    {
      std::cout << 7 << std::endl;
    }
    else if (number_string == "eight")
    {
      std::cout << 8 << std::endl;
    }
    else if (number_string == "nine")
    {
      std::cout << 9 << std::endl;
    }
    else if (number_string == "ten")
    {
      std::cout << 10 << std::endl;
    }
    else
    {
      std::cout << "Is this a spelled-out number?\n" << std::endl;
    }
  }
}
