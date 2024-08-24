#include <iostream>
#include <string>

int main()
{
  std::string previous;
  std::string current;

  std::cout << "Enter a word: ";
  while (std::cin >> current)
  {
    if (previous == current)
    {
      std::cout << current << " is a repeated word.\n";
    }
    previous = current;
  }
}
