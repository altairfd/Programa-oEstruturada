#include<stdio.h>

void main() {
    char equipe1[30], equipe2[30];
    int vitorias1, empates1, derrotas1, vitorias2, empates2, derrotas2;
    int pontos1, pontos2;

    printf("Digite o nome da primeira equipe: ");
    scanf("%s", equipe1);
    printf("Digite o número de vitórias, empates e derrotas da equipe %s, separados por espaço: ", equipe1);
    scanf("%d %d %d", &vitorias1, &empates1, &derrotas1);

    printf("Digite o nome da segunda equipe: ");
    scanf("%s", equipe2);
    printf("Digite o número de vitórias, empates e derrotas da equipe %s, separados por espaço: ", equipe2);
    scanf("%d %d %d", &vitorias2, &empates2, &derrotas2);

    pontos1 = vitorias1 * 3 + empates1;
    pontos2 = vitorias2 * 3 + empates2;

    printf("\nEquipe %s\n", equipe1);
    printf("Vitórias: %d\n", vitorias1);
    printf("Empates: %d\n", empates1);
    printf("Derrotas: %d\n", derrotas1);
    printf("Pontuação total: %d\n", pontos1);

    printf("\nEquipe %s\n", equipe2);
    printf("Vitórias: %d\n", vitorias2);
    printf("Empates: %d\n", empates2);
    printf("Derrotas: %d\n", derrotas2);
    printf("Pontuação total: %d\n", pontos2);
}