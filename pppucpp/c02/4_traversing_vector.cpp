#include <iostream>
#include <vector>

int main()
{
  std::vector<int> arrays = {5, 7, 9};
  arrays.push_back(3);

  for (int i : arrays) {
    std::cout << i << std::endl;
  };
  std::cout << "The size of vector array is "<< arrays.size() << std::endl;

  // Sorting
  std::vector<int> sort_this = {};
  for (int user_input; std::cin >> user_input;)
    sort_this.push_back(user_input);

  for (int i : sort_this) {
    std::cout << i << std::endl;
  }
}
