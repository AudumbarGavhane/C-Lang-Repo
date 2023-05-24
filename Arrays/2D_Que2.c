/*2. Write a program to accept a matrix A of size mXn and store its transpose in matrix B. Display matrix B. 
*/
#include <stdio.h>

int main() {
   int m, n, i, j;
   printf("Enter the number of rows (m) and columns (n) in the matrix: ");
   scanf("%d %d", &m, &n);

   int A[m][n], B[n][m];

   // Accepting matrix A
   printf("Enter the elements of matrix A:\n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &A[i][j]);
      }
   }

   // Finding transpose of matrix A and storing it in matrix B
   for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
         B[i][j] = A[j][i];
      }
   }

   // Displaying matrix B (transpose of matrix A)
   printf("Transpose of matrix A (matrix B):\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
         printf("%d ", B[i][j]);
      }
      printf("\n");
   }
   
   return 0;
}
