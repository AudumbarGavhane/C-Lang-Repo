/*6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2πr 2 + 2πrh,
volume = π r**2 h). Define a constant variable pi=3.14.*/

#include<stdio.h>

int main()
{
    float r, h, area, volume;

     printf("Enter radius= ");
     scanf("%f", &r);
     printf("Enter height= ");
     scanf("%f", &h);

     float pi = 3.14;
// calculation of area of cylinder
    area = 2*pi*r*r + 2*pi*r*h;
    printf("Area of cylinder = %f", area);

// Calculation of volume of cylinder
    volume = pi*r*r*h;
    printf("\nVolume of cylinder = %f", volume);
     
    return 0;
}