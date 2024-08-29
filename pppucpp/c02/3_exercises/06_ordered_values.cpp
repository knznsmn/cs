/*
   Write a program that prompts the user to enter three integer values, and then outputs the val-
   ues in numerical sequence separated by commas. So, if the user enters the values 10 4 6, the
   output should be 4, 6, 10. If two values are the same, they should just be ordered together.
   So, the input 4 5 4 should give 4, 4, 5.
*/

#include <iostream>

int main()
{
  int x {0},
      y {0},
      z {0};
  int a, b, c;

  std::cout << "This program sorts integers in ascending order.\n";
  std::cout << "Enter three integers: ";
  std::cin >> x >> y >> z;

  if (x < y && x < z)
  {
    a = x;
    if (y < z)
    {
      b = y;
      c = z;
    }
    else
    {
      b = z;
      c = y;
    }
  }
  else if (y < x && y < z)
  {
    a = y;
    if (x < z)
    {
      b = x;
      c = z;
    }
    else
    {
      b = z;
      c = x;
    }
  }
  else if (z < x && z < y)
  {
    a = z;
    if (x < y)
    {
      b = x;
      c = y;
    }
    else
    {
      b = y;
      c = x;
    }
  }
  else {
    std::cout << "Your numbers are invalid.\n";
  }

   std::cout << a << ", " << b << ", " << c << ".\n";


  /*
  if (y > x && y > z)
  {
    a = y;
    if (x > z)
    {
      b = x;
      c = z;
    }
    else
    {
      b = z;
      c = x;
    }
  }
  else if (y > x && y < z)
  {
    a = z;
    b = y;
    c = x;
  }
  else if (y < x )
  */
}
