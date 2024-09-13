/* Write a program that computes the volume of a sphere with a 10-meter radius, using the for-mula v = 4/3πr3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap-pens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself twice to compute r3
*/
#include <stdio.h>
#define PI 3.14159

int main()
{
  printf("Radius of a sphere: ");
  float r;
  scanf("%f", &r);
  float volume_sphere = (4.0 / 3.0) * PI * (r * r * r);
  printf("\nVolume of a sphere is %.2f.\n", volume_sphere);

  return 0;
}
