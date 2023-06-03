#include <stdio.h>

int main() {
    FILE *arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 100; i++) {
        fprintf(arquivo, "%2d ", i);

        if ((i + 1) % 10 == 0) {
            fprintf(arquivo, "\n");
        }
    }

    fclose(arquivo);

    printf("Números gravados com sucesso no arquivo 'numeros.txt'.\n");

    return 0;
}
