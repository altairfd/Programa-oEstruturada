#include <stdio.h>

int main() {
    FILE *arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char linha[1000];
    int numeroLinha = 1;

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%d: %s", numeroLinha, linha);
        numeroLinha++;
    }

    fclose(arquivo);

    return 0;
}
