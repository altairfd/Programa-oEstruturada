#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    
    float matriz[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = (float) rand() / RAND_MAX * 2 - 1;
        }
    }
    
    printf("Matriz original:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] *= 2;
        }
    }
    
    printf("\nMatriz após a multiplicação por 2:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] -= 1;
        }
    }
    
    printf("\nMatriz após a subtração de 1:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
