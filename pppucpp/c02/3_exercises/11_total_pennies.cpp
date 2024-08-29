/*
   Write a program that prompts the user to enter some number of pennies (1-cent coins), nick-
   els (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent
   coins), and one-dollar coins (100-cent coins). Query the user separately for the number of
   each size coin, e.g., ‘‘How many pennies do you have?’’ Then your program should print out
   something like this:
   You have 23 pennies.
   You have 17 nickels.
   You have 14 dimes.
   You have 7 quarters.
   You have 3 half dollars.
   The value of all of your coins is 573 cents.
*/

#include <iostream>

int main()
{
  std::cout << "This program calculates your coins in hand.\n" << std::endl;

  double penny {0},
         nickel {0},
         dime {0},
         quarter {0},
         half {0};

  std::cout << "How many pennies do you have? ";
  std::cin >> penny;
  std::cout << std::endl;
  std::cout << "How many nickels do you have? ";
  std::cin >> nickel;
  std::cout << std::endl;
  std::cout << "How many dimes do you have? ";
  std::cin >> dime;
  std::cout << std::endl;
  std::cout << "How many quarters do you have? ";
  std::cin >> quarter;
  std::cout << std::endl;
  std::cout << "How many half dollars do you have? ";
  std::cin >> half;
  std::cout << std::endl;

  std::cout << "You have " << penny;
  if (penny == 1) std::cout << " penny"; else std::cout << " pennies";
  std::cout << ".\n";
  
  std::cout << "You have " << nickel;
  if (penny == 1) std::cout << " nickel"; else std::cout << " nickels";
  std::cout << ".\n";

  std::cout << "You have " << dime;
  if (penny == 1) std::cout << " dime"; else std::cout << " dimes";
  std::cout << ".\n";

  std::cout << "You have " << quarter;
  if (penny == 1) std::cout << " quarter"; else std::cout << " quarters";
  std::cout << ".\n";

  std::cout << "You have " << half;
  if (penny == 1) std::cout << " half dollar"; else std::cout << " half dollars";
  std::cout << ".\n";

  int total_coins = (penny * 1) + (nickel * 5) + (dime * 10) + (quarter * 25) + (half * 50);
  int dollar = total_coins / 100;
  int cent = total_coins % 100;
  std::cout << "The value of all your coins is " << dollar;
  if (dollar == 1) std::cout << " dollar"; else std::cout << " dollars";
  if (cent != 0) std::cout << " and " << cent << " cents.\n"; else std::cout << ".\n";
}
