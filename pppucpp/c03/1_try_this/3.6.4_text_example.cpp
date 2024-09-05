/*
   TRY THIS
   Write a program that ‘‘bleeps’’ out words that you don’t like; that is, you read in
   words using cin and print them again on cout. If a word is among a few you have
   deﬁned, you write out BLEEP instead of that word. Start with one ‘‘disliked word’’
   such as
   string disliked = "Broccoli";
   When that works, add a few more.
*/

#include <iostream>
#include <vector>

int main()
{
  std::cout << "This program says bleep when cursed.\n\n";
  std::vector <std::string> bleeps {"shit", "damn", "hell"};

  for (std::string word; std::cin >> word;)
  {
    for (std::string x : bleeps)
    {
      if (x == word)
      {
        std::cout << "BLEEP" << std::endl;
      }
    }
    std::cout << word << std::endl;
  }
}
