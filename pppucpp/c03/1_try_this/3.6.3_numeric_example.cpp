// Testing 
//
//
#include <iostream>
#include <vector>

int main()
{
  std::vector<double> guesses;
  std::cout << "Enter numbers: ";
  for (double n; std::cin >> n;)
  {
    guesses.push_back(n);
  }

  std::cout << "vector -> guess' size() is " << guesses.size() << std::endl;
  for (int x : guesses)
  {
    if (guesses[guesses.size() - 1])
      std::cout << x << ", ";
    else
      std::cout << x << ".\n";
  }
}
