/*
   TRY THIS 
   The character'b'ischar(’a’+1),'c'ischar(’a’+2), etc. Use a loop to write out a table of characters with their corresponding integer values:
   a 97 b 98 ...
   z 122
 */

#include <iostream>

int main()
{
  char letter = 'a';
  while (letter <= 'z')
  {
  int in_int = letter;
    std::cout << letter << "\t" << in_int << "\n";
    letter++;
  }
  std::cout << "Done.";
}