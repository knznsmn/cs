/*
   Use the example above as a model for a program that converts yen ('y'), kroner ('k'), and pounds ('p') into dollars. If you like realism, you can find conversion rates on the Web.
*/

#include <iostream>

int main()
{
  std::cout << "Enter a currency (include the unit): "; 
  double in_yen = 0.25,
         in_kroner = 0.11,
         in_pounds = 0.16,
         in_dollars = 0;
  double amount = 0;
  char currency = ' ';

  std::cin >> amount >> currency; 

  if (currency == 'y') {
    in_dollars = amount * in_yen;
  }
  else if (currency == 'k') {
    in_dollars = amount * in_kroner;
  }
  else if (currency == 'p') {
    in_dollars = amount * in_pounds;
  }
 /* else {
    std::cout << "Unable to process data...\n";
  }
  */

  std::cout << amount << currency << " is "
            << in_dollars;
  if (in_dollars <= 1)
    std::cout << " dollar.\n";
  else std::cout << " dollars.\n";

}
