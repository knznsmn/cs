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
  std::vector <std::string> dislikes {"shit", "damn", "hell", "AI"};

  for (std::string word; std::cin >> word;)
  {
    bool is_disliked = false;
    for (std::string x : dislikes)
    {
      if (x == word)
        is_disliked = true;
    }
    if (is_disliked)
      std::cout << "BLEEP" << std::endl;
    else
      std::cout << word << std::endl;
  }
  std::cout << "\n\n" << std::endl;
  std::cout << "End of the program\n";
}
