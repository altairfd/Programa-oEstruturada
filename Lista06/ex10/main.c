#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[3][3];
    int i, j, linha, coluna, valor;
    srand(time(NULL));
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 2;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 3; i++) {
        if(matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]) {
            linha = i + 1;
            valor = matriz[i][0];
            printf("Todos os valores da linha %d sao iguais a %d\n", linha, valor);
        }
    }

    for(j = 0; j < 3; j++) {
        if(matriz[0][j] == matriz[1][j] && matriz[1][j] == matriz[2][j]) {
            coluna = j + 1;
            valor = matriz[0][j];
            printf("Todos os valores da coluna %d sao iguais a %d\n", coluna, valor);
        }
    }
    
    return 0;
}
