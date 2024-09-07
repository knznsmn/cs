/*
   Write a program that consists of a while-loop that (each time around the loop) reads in
   two ints and then prints them. Exit the program when a terminating '|' is entered.
*/

#include <iostream>

int main()
{
  int x {0},
      y {0};
  while (std::cin >> x >> y)
    std::cout << x << ", " << y << std::endl;
}
