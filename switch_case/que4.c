/*4. Accept radius from the user and write a program having menu with the following options and
corresponding actions:
Options Actions
1. Area of Circle
2. Circumference of Circle
3. Volume of Sphere*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float radius, Area_of_Circle, Circumference_of_Circle, Volume_of_Sphere, pi;
    int choice;
    pi = 3.14;
    printf("\nEnter radius: ");
    scanf("%f", &radius);

    while (1)
    {
        printf("\nEnter choice\n1. Area of Circle \n2. Circumference of Circle \n3. Volume of Sphere\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
           Area_of_Circle = pi * radius * radius;
           printf("\nArea of Circle= %0.2f", Area_of_Circle);
           getch();
            break;
        case 2:
            Circumference_of_Circle = 2 * pi * radius;
            printf("\nCircumference of Circle= %0.2f", Circumference_of_Circle);
            getch();
            break;
        case 3:
            Volume_of_Sphere = 4 * pi * radius * radius * radius / 3;
            printf("\nVolume of Sphere= %0.2f", Volume_of_Sphere);
            getch();
            break;
        
        default:
            break;
        }
    }
    
}