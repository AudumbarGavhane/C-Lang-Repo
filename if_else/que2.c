/* 2 Write a program to accept a number and check if it is divisible by 5 and 7.*/
#include<stdio.h>
int main()
{
	int a;
 
	printf("\n Enter Your number:");
	scanf("%d",&a);
	if (a%5==0 && a%7==0)
	{
	printf("\n %d is divisible by 5 and 7 \n \n",a);
	}
	else
	{
	printf("\n %d is not divisible by 5 and 7 \n \n",a);
	}
	return 0;
}