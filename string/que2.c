/*2. Write a program that accepts n strings and displays the longest string. Use array of strings.*/
#include <stdio.h>
#include <string.h>

int main() {
   int n, i;
   char str[100], longest_str[100];

   // Accepting the number of strings
   printf("Enter the number of strings: ");
   scanf("%d", &n);

   // Accepting the strings and finding the longest string
   printf("Enter the strings:\n");
   scanf("%s", longest_str);
   for (i = 1; i < n; i++) {
      scanf("%s", str);
      if (strlen(str) > strlen(longest_str)) {
         strcpy(longest_str, str);
      }
   }

   // Displaying the longest string
   printf("The longest string is: %s\n", longest_str);

   return 0;
}
