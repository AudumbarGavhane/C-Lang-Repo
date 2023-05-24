/*2. Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, and
0 otherwise. Use this function in main to accept n numbers and ckeck if they are even or odd.*/

#include<stdio.h>

int isEven(int);

void main()
{
    int numbers,number;
    int i;
    printf("How many number ? \n");
    scanf("%d",&numbers);
    for(i=1; i<=numbers; i++)
    {
        scanf("%d",&number);
        if(isEven(number)==1)
        printf("Even number\n");
        else
        printf("Odd number\n");
    }
}
int isEven(int x)
{
    if(x%2==0)
    return 1;
    else
    return 0;
}