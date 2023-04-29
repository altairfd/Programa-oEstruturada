#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[7][7];
    int i, j;
    
    srand(time(NULL));
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            matriz[i][j] = rand() % 41 + 10;
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (matriz[i][j] % 2 == 0) {
                matriz[i][j] = 0;
            }
        }
    }
    
    printf("\nMatriz com valores pares substituidos por zero:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (matriz[i][j] % 2 != 0) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("\nMatriz com valores impares substituidos por um:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
