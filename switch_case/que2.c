/*Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the
corresponding operation and displays the result.*/

#include<stdio.h>
int main()
{
  int a,b;
  char ch;
  printf("\nPlease enter two integer a and b: ");
    scanf("%d%d",&a,&b);

  printf("\n Enter any one operator +, -, *, / :");
  getchar();
   scanf("%c",&ch);

  switch(ch)
  {
    case '+':
    printf("\n The sum is %d",(a+b));
    break;
    case '-':
    printf("\n The difference is %d",(a-b));
    break;
    case '*':
    printf("\n The product is %d",(a*b));
    break;
    case '/':
    printf("\n The quotient is %d",(a/b));
    break;
    default: printf ("\n Invalid entry");
  }
}