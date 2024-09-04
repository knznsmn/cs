#include <iostream>
#include <vector>

int main()
{
  std::vector <std::string> words;

  std::cout << "Enter a series of string:\n";
  for (std::string word; std::cin >> word;)
  {
    words.push_back(word);
  }
  std::cout << "Last e: " << words[words.size() - 1];
  std::cout << std::endl;
  for (std::string s : words)
  {
    if (s == words[words.size() - 1])
      std::cout << s << ".\n";
    else
      std::cout << s << ", ";
  }
}
