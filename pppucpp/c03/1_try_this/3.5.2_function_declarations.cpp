/*
   TRY THIS Implementsquare()without using the multiplication operator; that is, do thex∗xby repeated addition (start a variable result at0and addxto itxtimes). Then run some version of ‘‘the first program’’ using thatsquare().
*/
#include <iostream>

int square(int n);

int main()
{
  std::cout << "Enter a number: \n";
  int number = 1;
  while (std::cin >> number)
  {
    std::cout << number << " squared is ";
    std::cout << square(number) << "\n";
  }
  
}

int square(int n)
{
  for (int i = 0; i <= n; i++)
  {
    n += n;
  }

  return n;
}

