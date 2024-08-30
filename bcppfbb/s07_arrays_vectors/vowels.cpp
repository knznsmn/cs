#include <iostream>

int main()
{
  char vowels[] = {'a', 'e', 'i', 'o', 'u'};
  std::cout << "First element => " << vowels[0];
  std::cout << "Last element => " << vowels[sizeof(vowels) - 1];

}
