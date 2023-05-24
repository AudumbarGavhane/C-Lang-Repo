/*3. Write a program to accept a character, an integer n and display the next n characters.*/

#include <stdio.h>

int main() {
    char ch;
    int n, i;

    // Read character and integer
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Display next n characters
    printf("Next %d characters: ", n);
    for (i = 0; i < n; i++) {
        printf("%c", ch + i + 1);
    }
    printf("\n");

    return 0;
}
