#include <stdio.h>

int main()
{
  printf("This program calculates the number of pieces ");
  printf("and pieces' length of a given length.\n");

  printf("Enter the lumber or plank's length: ");
  float plank_length = 0;
  printf("How long is the plank?\n");
  printf("Enter the length in foot unit: ");
  scanf("%f", &plank_length);
  printf("\nCut mode: pieces of length:\n");
  printf("\t1. No. of pieces\n\t2. Exact length\n");
  int mode = 1;
  float planks;
  scanf("%d", &mode);
  if (mode == 1)
  {
    float plank_pieces = 1;
    float piece_length = plank_length / plank_pieces;
    printf("Enter the number of pieces needed:");
    scanf("%f", &plank_pieces);
    printf("\nA %ffeet-long plank can be cut into %f pieces, ", plank_length, piece_length);
    printf("with a piece %f-feet in length for each piece.\n", plank_length);
  }
  else
  {
    float piece_length = 1;
    float plank_pieces = plank_length / piece_length;
    printf("Enter the length of the pieces needed:");
    scanf("%f", &piece_length);
    printf("\nThere's %f pieces of %f-long planks ", plank_pieces, piece_length);
    printf("from a %f-long plank.\n", plank_length);
  }

  return 0;
}
