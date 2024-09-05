#include <iostream>
#include <vector>

int main()
{
  std::vector<std::string> dislikes {"shit", "damn"};

  for (std::string word; std::cin >> word;)
  {
    bool is_ban = false;
    for (std::string s : dislikes)
    {
      if (word == s)
        is_ban = true;
    }
    if (is_ban)
      std::cout << "BLEEP" << std::endl;
    else
      std::cout << word << std::endl;
  }
}
