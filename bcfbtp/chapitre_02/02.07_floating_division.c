#include <stdio.h>

int main()
{
  printf("This program calculates the number of pieces\n");
  printf("and pieces' length of a given length.\n\n");

  printf("Enter the lumber or plank's length: ");
  float plank_length = 0;
  printf("How long is the plank?\n");
  printf("Enter the length in foot unit: ");
  scanf("%f", &plank_length);
  printf("\n\nCut mode: pieces of length:\n");
  printf("\t1. No. of pieces\n\t2. Exact length\n\n");
  int mode = 1;
  float planks;
  scanf("%d", &mode);
  if (mode == 1)
  {
    float plank_pieces = 1;
    printf("Enter the number of pieces needed: ");
    scanf("%f", &plank_pieces);
    float piece_length = plank_length / plank_pieces;
    printf("\nA %.2ffeet-long plank can be cut into %.0f pieces, ", plank_length, piece_length);
    printf("with %.2fft in length for each piece.\n", piece_length);
  }
  else
  {
    float piece_length = 1;
    printf("Enter the length of the pieces needed: ");
    scanf("%f", &piece_length);
    float plank_pieces = plank_length / piece_length;
    printf("\nThere's %.2f pieces of %.2f-long planks ", plank_pieces, piece_length);
    printf("from a %.2fft-long plank.\n", plank_length);
  }

  return 0;
}
