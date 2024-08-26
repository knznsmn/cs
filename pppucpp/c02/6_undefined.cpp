#include <iostream>

int main()
{
  int you_dont_define_me;

  int use_undefine = you_dont_define_me * 2;

  std::cout << you_dont_define_me << std::endl;
  std::cout << use_undefine << std::endl;
}
