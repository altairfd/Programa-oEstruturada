#include <stdio.h>

int main() {
   int pares[10];
   int i, num = 2;

   for (i = 0; i < 10; i++) {
      pares[i] = num;
      num += 2;
   }

   printf("Vetor de números pares de 2 a 20:\n");
   for (i = 0; i < 10; i++) {
      printf("%d ", pares[i]);
   }

   return 0;
}
