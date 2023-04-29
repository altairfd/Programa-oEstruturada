#include <stdio.h>

int main() {
   int numeros[8];
   int i, num, posicao = -1;

   printf("Digite 8 números inteiros:\n");
   for (i = 0; i < 8; i++) {
      scanf("%d", &numeros[i]);
   }

   printf("Digite um número para pesquisar no vetor: ");
   scanf("%d", &num);

   for (i = 0; i < 8; i++) {
      if (numeros[i] == num) {
         posicao = i;
         break;
      }
   }

   if (posicao >= 0) {
      printf("O número %d foi encontrado na posição %d do vetor.\n", num, posicao);
   } else {
      printf("O número %d não foi encontrado no vetor.\n", num);
   }

   return 0;
}