#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *arquivo = fopen("imagem2.pgm", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    srand(time(NULL));

    int linhas = 100;
    int colunas = 100;

    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "#imagem2.pgm\n");
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

    printf("Arquivo 'imagem2.pgm' criado com sucesso.\n");

    return 0;
}
