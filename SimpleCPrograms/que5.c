/*5. Accept two numbers and swap two numbers using
i) Third variable
ii) By performing arithmetic operations.*/



 #include<stdio.h>

 int main()
 {
    int a, b, temp;

    printf("Please enter a and b:");
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d", a, b);

//Using third variable

    temp = a;
    a = b;
    b = temp;

     printf("\na = %d, b = %d", a, b);

//By performing arithmetic operations.

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\na = %d, b = %d", a, b);

 }