#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int numero, palpite, tentativas = 0;
    srand(time(NULL));
    numero = rand() % 101; 
    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar um número entre 0 e 100.\n");
    while (tentativas < 5) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &palpite);
        if (palpite == numero) {
            printf("Parabéns! Você acertou o número %d em %d tentativa(s)!\n", numero, tentativas + 1);
            return 0;
        } else if (palpite < numero) {
            printf("O número que você tentou é menor do que o número que eu escolhi. Tente novamente!\n");
        } else {
            printf("O número que você tentou é maior do que o número que eu escolhi. Tente novamente!\n");
        }
        tentativas++;
    }
    printf("Suas tentativas acabaram! O número era %d. Tente novamente mais tarde.\n", numero);
}