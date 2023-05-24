/*6. Write a recursive C function to calculate the GCD of two numbers. Use this function in main.
 The GCD is calculated as : 
 gcd(a,b) = a if b = 0 
 = gcd (b, a mod b) otherwise.*/
 #include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return gcd(num2, num1 % num2);
    }
}

int main() {
    int num1, num2, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
