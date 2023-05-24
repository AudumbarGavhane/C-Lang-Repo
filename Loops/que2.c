/*2. Write a program to accept two integers x and n and compute x raised to n.*/

#include<stdio.h>

int main()
{
    int x, n, result;
    result = 1;
    printf("\nPlease enter inter x and n:");
    scanf("%d%d", &x, &n);
    for(int i=1; i<=n; i++)
    result = result * x;
    printf("\nx raised to n is equal to: %d", result);

    return 0;
}