#include<stdio.h>

void main() {
    char equipe[30];
    int vitorias, derrotas, empates;
    float total_jogos, percentual_vitorias, percentual_derrotas, percentual_empates;


    printf("Digite o nome da equipe: ");
    scanf("%s", equipe);
    printf("Digite o número de vitórias, derrotas e empates da equipe %s, separados por espaço: ", equipe);
    scanf("%d %d %d", &vitorias, &derrotas, &empates);

    total_jogos = vitorias + derrotas + empates;
    percentual_vitorias = (vitorias / total_jogos) * 100;
    percentual_derrotas = (derrotas / total_jogos) * 100;
    percentual_empates = (empates / total_jogos) * 100;

    printf("\nEquipe %s\n", equipe);
    printf("Vitórias: %d - %.0f%%\n", vitorias, percentual_vitorias);
    printf("Derrotas: %d - %.0f%%\n", derrotas, percentual_derrotas);
    printf("Empates: %d - %.0f%%\n", empates, percentual_empates);
}