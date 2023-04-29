#include <stdio.h>

int main() {
   int A[10], B[10], soma[10];
   int i;

   for (i = 0; i < 10; i++) {
      A[i] = 2 * (i + 1);
   }


   for (i = 0; i < 10; i++) {
      B[i] = 10 + i;
   }

   for (i = 0; i < 10; i++) {
      soma[i] = A[i] + B[i];
   }

   printf("Vetor A (números pares de 2 a 20):\n");
   for (i = 0; i < 10; i++) {
      printf("%d ", A[i]);
   }
   printf("\n");

   printf("Vetor B (números de 10 a 19):\n");
   for (i = 0; i < 10; i++) {
      printf("%d ", B[i]);
   }
   printf("\n");

   printf("Vetor soma (A + B):\n");
   for (i = 0; i < 10; i++) {
      printf("%d ", soma[i]);
   }
   printf("\n");

   return 0;
}