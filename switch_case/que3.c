/*
3. Accept two numbers in variables x and y from the user and perform the following operations
Options Actions
1. Equality Check if x is equal to y
2. Less Than Check if x is less than y
3. Quotient and Remainder Divide x by y and display the quotient and remainder
4. Range : Accept a number and check if it lies between x and y (both inclusive)
5. Swap : Interchange x and y
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int x, y, choice;
    printf("\nPlease enter x and y: ");
    scanf("%d%d", &x, &y);
     printf(" x=%d \n y=%d", x, y);

    int quotient, reminder;
    
  
    while (1)
    {
        printf("\nPlease enter choices\n1. Equality Check if x is equal to y \n2. Less Than Check if x is less than y \n3. Quotient and Remainder Divide x by y and display the quotient and remainder\n4. Range : Accept a number and check if it lies between x and y (both inclusive)\n5. Swap : Interchange x and y\n");
    
          scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                {if(x == y)
                    printf("\nEqual");
                else
                    printf("\nNot Equal");
                }
                getch();
            break;
            case 2:
                {if(x > y)
                    printf("\n x is greater than y");
                else
                    printf("\n y is greater than x");
                }
                getch();
            break;
            case 3:
                quotient = x/y;
                reminder = x % y;
                printf("quotient = %d\nReminder =%d", quotient, reminder);
                getch();
            break;
            case 4:
                printf("\nPlease enter a number say z.");
                int z;
                scanf("%d", &z);
                if(x>=z && z>=y || y>=z && z>=x)
                printf("\n z is lies between x and y");
                else
                printf("\n z does not lie between x and y");
                getch();
            break;
            case 5:
                x = x + y;
                y = x - y;
                x = x - y;
                printf("x=%d \n y=%d", x, y);
                getch();
            break;
            default:
                printf("\nPlease enter a valid number");
        }
    }
    return 0;
}