/*1. Write a program that accepts numbers continuously as long as the number is positive and prints the
sum of the given numbers.*/

#include<stdio.h>

int main()
{
    int number, sum;
    sum = 0;
    printf("\nPlease enter number:");
    while(1)
    {
        scanf("%d", &number);
        if(number<0)
        break;
        sum = sum + number;
    }
    printf("\nThe sum of numbers is = %d", sum);
}