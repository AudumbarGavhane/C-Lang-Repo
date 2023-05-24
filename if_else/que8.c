/*8. Write a program to accept 3 numbers and compute minimum and maximum from them.*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max, min;

    // Read three numbers from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Initialize max and min with first number
    max = min = num1;

    // Compare with second number
    if (num2 > max) {
        max = num2;
    }
    if (num2 < min) {
        min = num2;
    }

    // Compare with third number
    if (num3 > max) {
        max = num3;
    }
    if (num3 < min) {
        min = num3;
    }

    // Print the maximum and minimum
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
