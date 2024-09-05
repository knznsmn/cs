#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::cout << "Dictionary Builder 0.0.1" << std::endl;

  std::vector <std::string> words {};
  std::cout << "Enter a series of strings:\n";
  for (std::string word; std::cin >> word;)
  {
    words.push_back(word);
  }

  std::cout << "\n\n";
  std::cout << "Before sorting\n";
  for (std::string s : words)
  {
    if (s == words[words.size()-1])
      std::cout << s << ".\n";
    else
      std::cout << s << ", ";
  }

  std::cout << std::endl;
  std::cout << "After sorting\n";
  std::sort(words.begin(), words.end());
  for (std::string s : words)
  {
    if (s == words[words.size()-1])
      std::cout << s << ".\n";
    else
      std::cout << s << ", ";
  }

  std::cout << "End of the program.\n";
}
