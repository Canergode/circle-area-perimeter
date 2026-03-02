#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
  float radius,area,circumference;

  // Get radius from user
  printf("Enter the radius");
  scanf("%f",&radius);

  // Calculate the area and circumference
  area=PI*radius*radius;
  circumference=2*PI*radius;

  // Print the result
  printf("Circumference of the circle:%.3f",circumference);



    return 0;
}
