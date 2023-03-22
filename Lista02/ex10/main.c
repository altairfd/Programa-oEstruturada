#include<stdio.h>

void main() {
    int vida;
    int ataque;
    int defesa;
    float xp;

    printf("Digite o valor da vida do jogador: ");
    scanf("%d", &vida);

    printf("Digite o valor do ataque do jogador: ");
    scanf("%d", &ataque);

    printf("Digite o valor da defesa do jogador: ");
    scanf("%d", &defesa);

    xp = (vida + ataque + defesa) / 3.0;

    if (xp >= 0 && xp <= 25) {
        printf("Novato\n");
    } else if (xp >= 26 && xp <= 50) {
        printf("Mago\n");
    } else if (xp >= 51 && xp <= 75) {
        printf("Mago supremo\n");
    } else if (xp >= 76 && xp <= 100) {
        printf("Lorde das magias\n");
    } else {
        printf("Valor de XP invalido\n");
    }
}