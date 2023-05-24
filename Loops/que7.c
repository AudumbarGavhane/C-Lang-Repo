/*7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the
operation. Continue this process until user selects exit option.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    float area, radius, length, breadth, base, height, pi;
    int choice;

    pi = 3.14;

    while (1)
    {
        printf("\nPlease enter the choice out of following option:\na) Compute area of circle\nb) Compute area of rectangle\nc) Compute area of triangle\nd) Exit\n");
        scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("\nPlease enter the radius of circle: ");
                scanf("%f", &radius);
                area = pi * radius * radius;
                printf("\nArea of Circle = %0.2f", area);
                getch();
            break;
            case 2:
                printf("\nPlease enter the lenght and breadth of the rectangle: ");
                scanf("%f%f", &length, &breadth);
                area = length * breadth;
                printf("\nArea of Rectangle = %0.2f", area);
                getch();
            break;
            case 3:
                printf("\nPlease enter the base and height of the triangle: ");
                scanf("%f%f", &base, &height);
                area = 0.5 * base * height;
                printf("\nArea of triangle = %0.2f", area);
                getch();
            break;
            case 4:
                exit(0);
            break;
            default:
                printf("\nPlease enter the valid choice and try again...!");
                
            }
    }
     
}