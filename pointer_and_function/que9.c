/*9. Write a recursive function to calculate the nth Fibonacci number. Use this function in main to display the 
first n Fibonacci numbers. 
 The recursive definition of nth Fibonacci number is as follows: 
 fib(n) = 0 if n = 1
 = 1 if n = 2
 = fib(n-2) + fib(n-1) if n>2
*/
#include <stdio.h>

int fibonacci(int n) {
    // Base case
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    // Recursive case
    else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main() {
    int n, i;

    printf("Enter the number of Fibonacci numbers to display: ");
    scanf("%d", &n);

    printf("The first %d Fibonacci numbers are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

