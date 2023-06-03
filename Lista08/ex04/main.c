#include <stdio.h>

void escreverNumeroRomano(FILE *arquivo, int numero) {
    char romanos[13][3] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int arabicos[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

    int i = 12;
    while (numero > 0) {
        int div = numero / arabicos[i];
        numero %= arabicos[i];

        for (int j = 0; j < div; j++) {
            fprintf(arquivo, "%s", romanos[i]);
        }

        i--;
    }
}

int main() {
    FILE *arquivo = fopen("numeros_romanos.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 1; i <= 50; i++) {
        fprintf(arquivo, "%d :: ", i);
        escreverNumeroRomano(arquivo, i);
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);

    printf("Números romanos gravados com sucesso no arquivo 'numeros_romanos.txt'.\n");

    return 0;
}
