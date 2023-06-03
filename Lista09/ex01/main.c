#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *arquivo = fopen("imagem.pbm", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    srand(time(NULL));

    int linhas = 100;
    int colunas = 100;

    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "#imagem.pbm\n");
    fprintf(arquivo, "%d %d\n", colunas, linhas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int valor = rand() % 2;
            fprintf(arquivo, "%d ", valor);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);

    printf("Arquivo 'imagem.pbm' criado com sucesso.\n");

    return 0;
}
