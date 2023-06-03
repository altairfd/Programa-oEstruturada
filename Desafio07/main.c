#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int matriz[SIZE][SIZE];

    srand(time(NULL));

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    for (int j = 0; j < SIZE - 1; j++) {
        int soma = 0;
        for (int i = 0; i < SIZE - 1; i++) {
            soma += matriz[i][j];
        }
        matriz[SIZE - 1][j] = soma;
    }

    for (int i = 0; i < SIZE - 1; i++) {
        int soma = 0;
        for (int j = 0; j < SIZE - 1; j++) {
            soma += matriz[i][j];
        }
        matriz[i][SIZE - 1] = soma;
    }

    int soma_total = 0;
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1; j++) {
            soma_total += matriz[i][j];
        }
    }
    matriz[SIZE - 1][SIZE - 1] = soma_total;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
