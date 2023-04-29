#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int maior, segundoMaior, menor, segundoMenor;
    srand(time(NULL));

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 900 + 100;
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(matriz[i][j] > maior) {
                segundoMaior = maior;
                maior = matriz[i][j];
            } else if(matriz[i][j] > segundoMaior && matriz[i][j] < maior) {
                segundoMaior = matriz[i][j];
            }
            if(matriz[i][j] < menor) {
                segundoMenor = menor;
                menor = matriz[i][j];
            } else if(matriz[i][j] < segundoMenor && matriz[i][j] > menor) {
                segundoMenor = matriz[i][j];
            }
        }
    }

    printf("Matriz:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Segundo maior valor: %d\n", segundoMaior);
    printf("Segundo menor valor: %d\n", segundoMenor);

    return 0;
}
