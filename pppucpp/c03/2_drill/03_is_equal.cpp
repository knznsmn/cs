/*
   Augment the program so that it writes the line the numbers are equal (only) if they are
   equal. 
*/

#include <iostream>

int main()
{
  int x {0},
      y {0};
  while (std::cin >> x >> y)
  {
    if (x < y)
    {
      std::cout << "The smaller value is: " << x << "." << std::endl;
      std::cout << "The larger value is: " << y << "." << std::endl;
    }
    else if (x > y)
    {
      std::cout << "The smaller value is: " << y << "." << std::endl;
      std::cout << "The larger value is: " << x << "." << std::endl;
    }
    else
      std::cout << x << " and " << y << " are equal.\n";
  }
}
