/*
   Write a program that takes an operation followed by two operands and outputs the result. For
   example:
   + 100 3.14
   ∗ 45

   Read the operation into a string called operation and use an if-statement to figure out which
   operation the user wants, for example, if (operation=="+"). Read the operands into variables
   of type double. Implement this for operations called +, −, ∗, /, plus, minus, mul, and div with
   their obvious meanings.
*/

#include <iostream>

int main()
{
  std::cout << "This program takes an operation followed by two operands\n"
            << "and outputs the result.\n" << std::endl;

  std::string operation;
  double operand_1,
         operand_2;

  while (std::cin >> operation >> operand_1 >> operand_2)
  {
    if (operation == "+" || operation == "plus")
    {
      std::cout << operand_1 << " + " << operand_2 << " = " <<  operand_1 + operand_2 <<std::endl;
    }
    else if (operation == "-" || operation == "minus")
    {
      std::cout << operand_1 << " - " << operand_2 << " = " <<  operand_1 - operand_2 <<std::endl;
    }
    else if (operation == "*" || operation == "mul" || operation ==  "multiply" || operation == "times")
    {
      std::cout << operand_1 << " * " << operand_2 << " = " <<  operand_1 * operand_2 <<std::endl;
    }
    else if (operation == "/" || operation == "div" || operation == "divide" || operation == "divided")
    {
      std::cout << operand_1 << " / " << operand_2 << " = " <<  operand_1 / operand_2 <<std::endl;
    }
    else
    {
      std::cout << "Something went wrong with my input functions.\n" << std::endl;
    }
  }
}
