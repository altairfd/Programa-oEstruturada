#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int vetor[4];
   int decimal = 0;
   int i;

   srand(time(NULL));
   for (i = 0; i < 4; i++) {
      vetor[i] = rand() % 2;
   }

   printf("O vetor gerado é: ");
   for (i = 0; i < 4; i++) {
      printf("%d ", vetor[i]);
   }
   printf("\n");

   for (i = 0; i < 4; i++) {
      decimal += vetor[i] * (1 << (3 - i));
   }

   printf("O número binário ");
   for (i = 0; i < 4; i++) {
      printf("%d", vetor[i]);
   }
   printf(" em decimal é %d.\n", decimal);

   return 0;
}