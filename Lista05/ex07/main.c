#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ERROS 3

int main() {
   int vetor[4];
   int decimal;
   int tentativa;
   int acertos = 0, erros = 0;
   int num_erros = 0;
   int i;

   srand(time(NULL));

   // Loop principal do jogo
   while (num_erros < MAX_ERROS) {

      for (i = 0; i < 4; i++) {
         vetor[i] = rand() % 2;
      }
      decimal = 0;
      for (i = 0; i < 4; i++) {
         decimal += vetor[i] * (1 << (3 - i));
      }

      printf("Qual é o número decimal correspondente a %d%d%d%d? ", vetor[0], vetor[1], vetor[2], vetor[3]);
      scanf("%d", &tentativa);

      if (tentativa == decimal) {
         printf("Parabéns, você acertou!\n");
         acertos++;
      } else {
         printf("Que pena, o número correto era %d.\n", decimal);
         erros++;
         num_erros++;
      }
   }

   printf("Fim do jogo!\n");
   printf("Você acertou %d vezes e errou %d vezes.\n", acertos, erros);

   return 0;
}