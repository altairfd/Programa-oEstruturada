#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int vetor[4];
   int i;

   srand(time(NULL));

   for (i = 0; i < 4; i++) {
      vetor[i] = rand() % 2;
   }

   printf("Vetor aleatório de 4 elementos com 0's e 1's:\n");
   for (i = 0; i < 4; i++) {
      printf("%d ", vetor[i]);
   }
   printf("\n");

   return 0;
}
