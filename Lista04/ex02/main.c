#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int jogador, computador;
    srand(time(NULL));
    computador = rand() % 3; 
    printf("O computador escolheu ");
    switch(computador) {
        case 0:
            printf("pedra.\n");
            break;
        case 1:
            printf("papel.\n");
            break;
        case 2:
            printf("tesoura.\n");
            break;
    }
    printf("Escolha uma opção:\n");
    printf("0 - pedra\n");
    printf("1 - papel\n");
    printf("2 - tesoura\n");
    scanf("%d", &jogador);
    while (jogador < 0 || jogador > 2) {
        printf("Digite uma opção válida: ");
        scanf("%d", &jogador);
    }
    printf("Você escolheu ");
    switch(jogador) {
        case 0:
            printf("pedra.\n");
            break;
        case 1:
            printf("papel.\n");
            break;
        case 2:
            printf("tesoura.\n");
            break;
    }
    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 0 && computador == 2) ||
               (jogador == 1 && computador == 0) ||
               (jogador == 2 && computador == 1)) {
        printf("Parabéns! Você venceu!\n");
    } else {
        printf("Você perdeu! Tente novamente!\n");
    }
}