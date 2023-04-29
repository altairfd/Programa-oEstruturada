#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[5][5];
    int somaPositivos = 0, somaNegativos = 0;
    printf("Matriz gerada:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 21 - 10; 
            printf("%3d ", matriz[i][j]); 
            if (matriz[i][j] >= 0) {
                somaPositivos += matriz[i][j];
            } else {
                somaNegativos += matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("Soma dos positivos: %d\n", somaPositivos);
    printf("Soma dos negativos: %d\n", somaNegativos);
    return 0;
}
