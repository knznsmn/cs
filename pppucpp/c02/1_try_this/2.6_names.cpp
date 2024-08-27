/*
   TRY THIS
   Compile the ‘‘Goodbye, cruel world!’’ program and examine the error messages.
   Did the compiler ﬁnd all the errors? What did it suggest as the problems? Did the
   compiler get confused and diagnose more than four errors? Remove the errors one
   by one, starting with the lexically ﬁrst, and see how the error messages change (and
   improve).
*/

#include <iostream>

int main()
{
  std::string s = "Goodbye, kewl world!";
  std::cout << s << std::endl;
}
