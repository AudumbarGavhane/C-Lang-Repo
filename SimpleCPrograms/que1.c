/*1. Accept the radius from user and compute the area and circumference of a circle.*/
#include<stdio.h>
void main()
{
  float radius, area, C_O_C;
    printf("Enter Radius of Circle\n");
    scanf("%f",&radius);

    area=3.14*radius*radius;
    printf("The area of Circle is %f",area);

    C_O_C=2*3.14*radius;
    printf("\nThe Circumference of Circle is %f",C_O_C);
}
