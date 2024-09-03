/*
   TRY THIS Rewrite the character value example from the previousTRY THISto use afor-state-ment. Then modify your program to also write out a table of the integer values for uppercase letters and digits. 
*/

#include <iostream>

int main()
{
  // char letter = 'a';

  for (char i = 'a'; i <= 'z'; i++)
  {
    int in_int = i;
    std::cout << i << "\t" << in_int << std::endl;
  }

  std::cout << "uppercase.\n";
  for (char i = 'A'; i <= 'Z'; i++)
  {
    int in_int = i;
    std::cout << i << "\t" << in_int << std::endl;
  }
  std::cout << "Done.\n";
}
