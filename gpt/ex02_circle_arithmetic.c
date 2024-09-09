#include <stdio.h>

#define PI  3.14159

float circumference(float r);
float area_circle(float r);

int main()
{
  printf("This program calculated the circle's circumference and area.\n");
  printf("Enter the radius of the circle: ");

  float radius = 0;
  scanf("%f", &radius);

  printf("The circumference of the circle with a radius of %.0f is %.2f.\n", radius, circumference(radius));
  printf("Such circle has an area of %.2f.\n", area_circle(radius));

}

float circumference(float r)
{
  return 2 * PI * r;
}
float area_circle(float r)
{
  return PI * r * r;
}
