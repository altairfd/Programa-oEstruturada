#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *arquivo = fopen("imagem3.ppm", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    srand(time(NULL));

    int linhas = 100;
    int colunas = 300;

    fprintf(arquivo, "P3\n");
    fprintf(arquivo, "#imagem3.ppm\n");
    fprintf(arquivo, "%d %d\n", colunas, linhas);
    fprintf(arquivo, "255\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int valor = rand() % 256;
            fprintf(arquivo, "%d ", valor);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);

    printf("Arquivo 'imagem3.ppm' criado com sucesso.\n");

    return 0;
}
