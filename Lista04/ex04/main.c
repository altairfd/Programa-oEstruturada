#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void desenha_gol(int posicao_gol) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                printf("%d", posicao_gol);
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int posicao_chute, posicao_defesa, gol_chutador = 0, gol_goleiro = 0, total_chutes = 0, i;
    srand(time(NULL));
    printf("Bem-vindo ao jogo de disputa de pênaltis!\n");
    while (total_chutes < 5) {
        printf("\n\n== Rodada %d ==\n", total_chutes + 1);
        printf("Chutador, escolha uma posição para chutar (1 a 9): ");
        scanf("%d", &posicao_chute);
        while (posicao_chute < 1 || posicao_chute > 9) {
            printf("Posição inválida! Escolha uma posição para chutar (1 a 9): ");
            scanf("%d", &posicao_chute);
        }
        printf("Goleiro, escolha uma posição para defender (1 a 9): ");
        scanf("%d", &posicao_defesa);
        while (posicao_defesa < 1 || posicao_defesa > 9) {
            printf("Posição inválida! Escolha uma posição para defender (1 a 9): ");
            scanf("%d", &posicao_defesa);
        }
        printf("\n");
        desenha_gol(posicao_defesa);
        if (posicao_chute == posicao_defesa) {
            printf("\nO goleiro defendeu o chute!\n");
        } else {
            printf("\nGol do chutador!\n");
            gol_chutador++;
        }
        printf("Placar: Chutador %d x %d Goleiro\n", gol_chutador, gol_goleiro);
        total_chutes++;

        i = posicao_chute;
        posicao_chute = posicao_defesa;
        posicao_defesa = i;
        if (total_chutes == 5 && gol_chutador == gol_goleiro) {
            printf("\nEmpate! Vamos para a disputa de pênaltis extras!\n");
        }
    }
    if (gol_chutador > gol_goleiro) {
        printf("\n\nO chutador venceu a disputa de pênaltis por %d a %d!\n", gol_chutador, gol_goleiro);
    } else if (gol_goleiro > gol_chutador) {
        printf("\n\nO goleiro venceu a disputa de pênaltis por %d a %d!\n", gol_goleiro, gol_chutador);
    } else {
        printf("\n\nDisputa de pênaltis empatada! Fim de jogo.\n");
    }
}