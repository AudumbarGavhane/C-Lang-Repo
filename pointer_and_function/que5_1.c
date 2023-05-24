#include <stdio.h>

// function to calculate x raised to y
double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

// function to calculate n!
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double term = power(x, i) / factorial(i);
        sum += term;
    }

    printf("The sum of first %d terms of the Taylor series for e^%.2f is %.2f", n, x, sum);
    return 0;
}
