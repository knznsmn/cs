
/*
   Change the program so that it writes out the numbers are almost equal after writing out
   which is the larger and the smaller if the two numbers differ by less than 1.0/100.
*/

#include <iostream>

double is_almost(double x, double y);

int main()
{
  double x {0},
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

    if (is_almost(x, y)) 
    {
      std::cout << "The numbers are almost equal." << std::endl;
    }
  }
}

double is_almost(double x, double y)
{
  double larger,
         smaller;
  if (x > y)
  {
    larger = x;
    smaller = y;
  }
  else {
    larger = y;
    smaller = x;
  }

  return (larger - smaller) <= (10 / 100);
}
