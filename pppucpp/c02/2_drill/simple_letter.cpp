#include <iostream>

int main()
{
  /*
     Write a program that produces a simple form letter based on user input. Begin by typing
     the code from §2.1 prompting a user to enter his or her ﬁrst name and writing ‘‘Hello,
     ﬁrst_name’’ where ﬁrst_name is the name entered by the user. Then modify your code as
     follows: change the prompt to ‘‘Enter the name of the person you want to write to’’ and
     change the output to ‘‘Dear ﬁrst_name,’’. Don’t forget the comma.
  */
  std::cout << "This program helps you write a letter for someone.\n" << std::endl;
  std::cout << "Enter the name of the person you want to write to: ";
  std::string recipient = "???";
  std::cin >> recipient;
  std::cout << std::endl;
  std::cout << "Dear " << recipient << ", " << std::endl;

  /*
     Add an introductory line or two, like ‘‘How are you? I am ﬁne. I miss you.’’ Be sure to
     indent the ﬁrst line. Add a few more lines of your choosing – it’s your letter.
  */
  std::cout << std::endl;
  std::cout << "\tHow are you I'm fine thank you. Why are you reading this letter?\n"
            << "You need to touch some grass. Go outside. Feel the fresh air. "
            << "Have a life.\n\n \tYou should do that now. Do it now. Right now.\n"
            << std::endl;

  /*
     Now prompt the user for the name of another friend and store it in friend_name. Add a
     line to your letter: ‘‘Have you seen friend_name lately?’’ 
  */

  std::cout << "What's the name of your friend? ";
  std::string friend_name = "???";
  std::cin >> friend_name;
  std::cout << std::endl;
  std::cout << "Have you seen " << friend_name << " lately?\n" << std::endl;

  /*
     Prompt the user to enter the age of the recipient and assign it to an int variable age. Have
     your program write ‘‘I hear you just had a birthday and you are age years old.’’ If age is 0
     or less or 110 or more, call simple_error("you’re kidding!") using simple_error() from
     PPP_support.
  */

  std::cout << "Enter the age of " << recipient << ": ";
  int friend_age = -1;
  while (friend_age <= 0 || friend_age >= 110) {
    std::cin >> friend_age;
  }
  
  /*
     Add this to your letter:
     If your friend is under 12, write ‘‘Next year you will be age+1.’’ If your friend is
     17, write ‘‘Next year you will be able to vote.’’ If your friend is over 70, write
     ‘‘Are you retired?’’
     Check your program to make sure it responds appropriately to each kind of value.
   */

  std::cout << std::endl;
  if (friend_age < 12)
    std::cout << "Next year, you will be " << friend_age + 1 << ".";
  else if (friend_age == 17)
    std::cout << "Next year you will be able to vote.";
  else if (friend_age > 70)
    std::cout << "Are you retired?";
  else {
    std::cout << "You should enjoy life.";
  }

  std::cout << " There's a long and happy years ahead of you.\n";
  std::cout << std::endl;

  /*
     Add ‘‘Yours sincerely,’’ followed by two blank lines for a signature, followed by your
     name.
  */
  std::cout << std::endl;
  std::cout << "Yours sincerely,\n\n";
  std::cout << "Julius C. Cesar" << std::endl;
}

