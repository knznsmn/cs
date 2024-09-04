/*
   TRY THIS Write a program that ‘‘bleeps’’ out words that you don’t like; that is, you read in words usingcinand print them again oncout. If a word is among a few you have defined, you write outBLEEPinstead of that word. Start with one ‘‘disliked word’’ such as string disliked = "Broccoli";
   When that works, add a few more.
*/

#include <iostream>
#include <vector>

int main()
{
  std::vector<std::string> bleeps {"Anyhow", "However"};
  std::vector<std::string> words;
  std::string word = ' ';
  while (std::cin >> word)
  {
    words.push_back(word);
    for (std::string s : words)
    {
      std::cout << s << ", ";
    }
    /*
    for (std::string s : bleeps)
    {
      if (word == s)
        std::cout << "Bleep\n";
      else 
        std::cout << s << std::endl;
    }
    */
  }
}
