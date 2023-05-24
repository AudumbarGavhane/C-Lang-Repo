/*3. Write a program to add and multiply two matrices. Perform necessary checks before adding and 
multiplying the matrices.*/
#include <stdio.h>

int main() {
   int m1, n1, m2, n2, i, j, k;

   // Accepting dimensions of matrix 1
   printf("Enter the number of rows (m1) and columns (n1) in matrix 1: ");
   scanf("%d %d", &m1, &n1);

   // Accepting dimensions of matrix 2
   printf("Enter the number of rows (m2) and columns (n2) in matrix 2: ");
   scanf("%d %d", &m2, &n2);

   if (n1 != m2) { // Checking if matrix multiplication is possible
      printf("Error: Matrix multiplication is not possible\n");
      return 0;
   }

   int A[m1][n1], B[m2][n2], C[m1][n2];

   // Accepting matrix A
   printf("Enter the elements of matrix A:\n");
   for (i = 0; i < m1; i++) {
      for (j = 0; j < n1; j++) {
         scanf("%d", &A[i][j]);
      }
   }

   // Accepting matrix B
   printf("Enter the elements of matrix B:\n");
   for (i = 0; i < m2; i++) {
      for (j = 0; j < n2; j++) {
         scanf("%d", &B[i][j]);
      }
   }

   // Performing matrix addition
   if (m1 == m2 && n1 == n2) {
      printf("Addition of matrix A and matrix B:\n");
      for (i = 0; i < m1; i++) {
         for (j = 0; j < n1; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
         }
         printf("\n");
      }
   } else {
      printf("Error: Matrix addition is not possible\n");
   }

   // Performing matrix multiplication
   if (n1 == m2) {
      printf("Multiplication of matrix A and matrix B:\n");
      for (i = 0; i < m1; i++) {
         for (j = 0; j < n2; j++) {
            C[i][j] = 0;
            for (k = 0; k < n1; k++) {
               C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", C[i][j]);
         }
         printf("\n");
      }
   } else {
      printf("Error: Matrix multiplication is not possible\n");
   }

   return 0;
}
