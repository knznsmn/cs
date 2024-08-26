#include <iostream>
#include <vector>

int main()
{
  std::vector<double> tips = {};
  std::cout << "Enter the numbers:" << std::endl;
  for (double tip; std::cin >> tip;)
    tips.push_back(tip);

  std::cout << "The tips are : ";
  for (int i : tips) {
    std::cout << i;
    if (i != tips[tips.size() - 1])
      std::cout << ", ";
    else {
      std::cout << "." << std::endl;
    }
  }
  std::cout << "The average is ";
  double total = 0;
  for (int i : tips)
  {
    total += i;
  }
  std::cout << total / tips.size() << std::endl;
  //std::cout << total / total.size() << std::endl;
}
