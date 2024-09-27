#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(0));
  char quit_key = 'q';
  char user_key;
  int level = 0;
  int difficulty = level + 10;
  int score = 0;

  while ((user_key = getchar()) != 'q')
  {
    ++level;
    printf("You're in level %d\n", level);
    int imsorandom = rand() % difficulty;
    printf("random number = %d\n", imsorandom);
    printf("Guess the number: ");
    int user_guess;
    scanf("%d", &user_guess);

    if (user_guess == imsorandom)
    {
      ++score;
      ++level;
      printf("You're in level %d\n", level);
      printf("You're in level %d\n", score);
    }
  }

  return 0;
}
