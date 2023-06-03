#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int gerarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void gerarMatrizAleatoria(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = gerarNumeroAleatorio(10, 99);
        }
    }
}

void gravarMatrizEmArquivo(int matriz[LINHAS][COLUNAS]) {
    FILE *arquivo = fopen("matriz.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);

    printf("Matriz gravada com sucesso no arquivo 'matriz.txt'.\n");
}

int main() {
    srand(time(NULL));  // Inicializa a semente aleatória

    int matriz[LINHAS][COLUNAS];

    gerarMatrizAleatoria(matriz);

    gravarMatrizEmArquivo(matriz);

    return 0;
}
