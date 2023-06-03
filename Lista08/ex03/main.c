#include <stdio.h>

int main() {
    int numero;

    FILE *arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            char tipo[20] = "";
            char paridade[20] = "";

            if (numero > 0) {
                strcpy(tipo, "positivo");
            } else {
                strcpy(tipo, "negativo");
            }

            if (numero % 2 == 0) {
                strcpy(paridade, "par");
            } else {
                strcpy(paridade, "impar");
            }

            fprintf(arquivo, "%d -> %s %s\n", numero, tipo, paridade);
        }

    } while (numero != 0);

    fclose(arquivo);

    printf("Numeros gravados com sucesso no arquivo 'numeros.txt'.\n");

    return 0;
}
