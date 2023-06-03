#include <stdio.h>

int main() {
    FILE *arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int contagemLinhas = 0;
    char linha[1000];

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
        contagemLinhas++;
    }

    fclose(arquivo);

    printf("\nTotal de linhas: %d\n", contagemLinhas);

    return 0;
}
