/*5. Write a program to accept a decimal number and convert it to binary.
*/
#include <stdio.h>

int main() {
    int decimalNumber, binaryNumber = 0, remainder, power = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    
    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * power;
        power *= 10;
        decimalNumber /= 2;
    }
    
    printf("Binary number: %d\n", binaryNumber);
    
    return 0;
}
