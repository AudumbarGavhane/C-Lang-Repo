/*3. Write a menu driven program to perform the following operations on strings using standard library 
functions: Length, Copy, Concatenation, Compare, Reverse, Uppercase, Lowercase, Check case.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
   int choice, len;
   char str1[100], str2[100];

   while (1) {
      printf("\n***MENU***\n");
      printf("1. Length\n");
      printf("2. Copy\n");
      printf("3. Concatenation\n");
      printf("4. Compare\n");
      printf("5. Reverse\n");
      printf("6. Uppercase\n");
      printf("7. Lowercase\n");
      printf("8. Check case\n");
      printf("9. Exit\n");

      printf("Enter your choice: ");
      scanf("%d", &choice);

      switch (choice) {
         case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            len = strlen(str1);
            printf("The length of the string is: %d\n", len);
            break;

         case 2:
            printf("Enter the source string: ");
            scanf("%s", str1);
            strcpy(str2, str1);
            printf("The copied string is: %s\n", str2);
            break;

         case 3:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("The concatenated string is: %s\n", str1);
            break;

         case 4:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            if (strcmp(str1, str2) == 0) {
               printf("The strings are equal.\n");
            } else {
               printf("The strings are not equal.\n");
            }
            break;

         case 5:
            printf("Enter a string: ");
            scanf("%s", str1);
            strrev(str1);
            printf("The reversed string is: %s\n", str1);
            break;

         case 6:
            printf("Enter a string: ");
            scanf("%s", str1);
            strupr(str1);
            printf("The uppercase string is: %s\n", str1);
            break;

         case 7:
            printf("Enter a string: ");
            scanf("%s", str1);
            strlwr(str1);
            printf("The lowercase string is: %s\n", str1);
            break;

         case 8:
            printf("Enter a string: ");
            scanf("%s", str1);
            if (isupper(str1[0])) {
               printf("The string is in uppercase.\n");
            } else if (islower(str1[0])) {
               printf("The string is in lowercase.\n");
            } else {
               printf("The string is not in uppercase or lowercase.\n");
            }
            break;

         case 9:
            return 0;

         default:
            printf("Invalid choice.\n");
      }
   }
}
