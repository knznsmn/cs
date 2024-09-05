#include <iostream>
#include <algorithm>
#include <array>

int main()
{
  std::array<int, 5> my_array {0, 5, 3, 6, 9};
  for (int x : my_array)
  {
    std::cout << x << " " << std::endl;
  }
  std::cout << "\n\n";

  std::sort(my_array.begin(), my_array.end());
  for (int x : my_array)
  {
    std::cout << x << " " << std::endl;
  }
}
