/*
   Get the ‘‘repeated word detection program’’ to run. Test it with the sentence She she
   laughed "he he he!" because what he did did not look very very good good. How many
   repeated words were there? Why? What is the deﬁnition of word used here? What
   is the deﬁnition of repeated word? (For example, is She she a repetition?)
*/

#include <iostream>

int main()
{
  std::cout << "This program detects adjacent repeated word.\n" << std::endl;
  std::string previous,
              current;

  while (std::cin >> current) {
    if (previous == current)
      std::cout << current << ": This is a repeated word." << std::endl;
    previous = current;
  }
}
