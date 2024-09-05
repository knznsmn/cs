/*
   Change the program to write out the smaller value is: followed by the smaller of the num-
   bers and the larger value is: followed by the larger value.
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
    else
    {
      std::cout << "The smaller value is: " << y << "." << std::endl;
      std::cout << "The larger value is: " << x << "." << std::endl;
    }
  }
}
