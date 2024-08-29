/*
   Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hem-
   ingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck. 
*/

#include <iostream>

int main()
{
  std::string x {""},
              y {""},
              z {""};
  std::string a, b, c;

  std::cout << "This program sorts strings in ascending order.\n";
  std::cout << "Enter three words: ";
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
    std::cout << "Your words are invalid.\n";
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
