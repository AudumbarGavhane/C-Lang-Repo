/*7. Write a recursive C function to calculate x raised to y . (Do not use standard library function)
*/
#include <stdio.h>

int power(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * power(x, y-1);
    }
}

int main() {
    int x, y, result;

    printf("Enter the base number: ");
    scanf("%d", &x);

    printf("Enter the exponent: ");
    scanf("%d", &y);

    result = power(x, y);

    printf("%d raised to %d is %d\n", x, y, result);

    return 0;
}
