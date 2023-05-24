/*4. Write a program to calculate factorial of a number.
For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120*/

#include<stdio.h>

int main()
{
    int i, n, fact;

    fact = 1;
    printf("\nPlease enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        fact = fact * i;

    printf("\nFactorial of a number is: %d",fact);
    return 0;
}