/* 3  Write a program, which accepts annual basic salary of an employee and calculates and displays the
Income tax as per the following rules.
Basic: < 1, 50,000 Tax = 0
1, 50,000 to 3,00,000 Tax = 20%
> 3,00,000 Tax = 30% */

#include<stdio.h>
void main()
{
 float sal,tax;
 printf("Enter the Employee basic salary : ");
 scanf("%f",&sal);
 if(sal<=150000)
 {
  tax=0;
  printf("\nTax = %f",tax);
 }
 else if(sal>150000 && sal<=300000)
 {
  tax=(sal*0.2);
  printf("\nTax = %f",tax);
 }
 else if(sal>300000)
 {
  tax=(sal*0.3);
  printf("\nTax = %f",tax);
 }
}