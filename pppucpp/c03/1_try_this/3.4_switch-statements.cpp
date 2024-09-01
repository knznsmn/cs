/*
   Rewrite your currency converter program from the previousTRY THISto use a switch-statement. Add a conversion from Swiss francs.
   Which version of the pro-gram is easier to write, understand, and modify? Why?
*/

#include <iostream>

int main()
{
  std::cout << "Enter a currency (include the unit): "; 
  double in_yen = 0.20,
         in_kroner = 0.10,
         in_pounds = 0.50,
         in_dollars = 0;
  double amount = 0;
  char currency = ' ';

  std::cin >> amount >> currency; 

  switch (currency)
  {
    case 'y': in_dollars = amount * in_yen;
              break;
    case 'k': in_dollars = amount * in_kroner;
              break;
    case 'p': in_dollars = amount * in_pounds;
              break;
    default: std::cout << "Unable to process data...\n";
  }

  /*
  if (currency == 'y') {
    in_dollars = amount * in_yen;
  }
  else if (currency == 'k') {
    in_dollars = amount * in_kroner;
  }
  else if (currency == 'p') {
    in_dollars = amount * in_pounds;
  }
*/
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
