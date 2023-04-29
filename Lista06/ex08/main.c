#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double matriz[6][6];
    double soma = 0.0;
    double media;
    int i, j;

    srand(time(NULL)); 
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = (double) rand() / RAND_MAX;
            soma += matriz[i][j];
        }
    }

    media = soma / 36;

    printf("Matriz gerada:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Média: %.2f\n", media);

    return 0;
}
