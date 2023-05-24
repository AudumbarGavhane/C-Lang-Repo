/*7. Write a C program to accept a character and invert the case of it.*/

#include <stdio.h>

int main() {
    char ch;

    // Read a character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase and invert its case
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;   // Convert uppercase to lowercase
    }
    else if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;   // Convert lowercase to uppercase
    }

    // Print the inverted character
    printf("Inverted character: %c\n", ch);

    return 0;
}
