#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int jogador; 
    int computador; 
    int soma;
    int escolha;
    srand(time(NULL));
    computador = rand() % 6; 
    printf("O computador escolheu %d.\n", computador);
    printf("Digite um número entre 0 e 5: ");
    scanf("%d", &jogador);
    while (jogador < 0 || jogador > 5) {
        printf("Digite um número válido entre 0 e 5: ");
        scanf("%d", &jogador);
    }
    printf("Você escolheu %d.\n", jogador);
    printf("Digite 0 para escolher par ou 1 para escolher ímpar: ");
    scanf("%d", &escolha);
    while (escolha != 0 && escolha != 1) {
        printf("Digite uma escolha válida (0 para par ou 1 para ímpar): ");
        scanf("%d", &escolha);
    }
    soma = jogador + computador;
    printf("A soma dos números é %d.\n", soma);
    if (soma % 2 == escolha) {
        printf("Parabéns! Você venceu!\n");
    } else {
        printf("Você perdeu! Tente novamente!\n");
    }
}