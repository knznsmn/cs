#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void greeting();
int imsorandom();

int main(void)
{
  srand(time(0));
  char quit_key = 'q';
  char user_key;
  int level = 0;
  int score = 0;

  greeting();

  while ((user_key = getchar()) != 'q')
  {
    ++level;
    printf("You're in level %d\n", level);
    printf("**Random number = %d**\n", imsorandom(level));
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

int imsorandom(int level)
{
  return rand() % level + 1;
}
void greeting()
{
  printf("Welcome to Guess Me I'm So Random!\n");
}
