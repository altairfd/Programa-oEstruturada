#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int vetor[8];
   int i, contador = 0, soma_maior_30 = 0, soma_total = 0;


   srand(time(NULL));


   for (i = 0; i < 8; i++) {
      vetor[i] = rand() % 51;
   }

   printf("Vetor aleatório de 8 elementos:\n");
   for (i = 0; i < 8; i++) {
      printf("%d ", vetor[i]);
   }
   printf("\n");

   for (i = 0; i < 8; i++) {
      if (vetor[i] > 30) {
         contador++;
         soma_maior_30 += vetor[i];
      }
      soma_total += vetor[i];
   }

   printf("Número de elementos maiores que 30: %d\n", contador);
   printf("Soma dos elementos maiores que 30: %d\n", soma_maior_30);

   printf("Soma de todos os elementos: %d\n", soma_total);

   return 0;
}