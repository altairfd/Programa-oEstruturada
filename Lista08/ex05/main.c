#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

char gerarLetraAleatoria() {
    return (char)(rand() % 26 + 97);  // Gera uma letra minúscula aleatória
}

void gerarTextoAleatorio(FILE *arquivo) {
    int numLinhas = gerarNumeroAleatorio(10, 20);

    for (int i = 0; i < numLinhas; i++) {
        int numPalavras = gerarNumeroAleatorio(5, 20);

        for (int j = 0; j < numPalavras; j++) {
            int numLetras = gerarNumeroAleatorio(1, 15);

            for (int k = 0; k < numLetras; k++) {
                char letra = gerarLetraAleatoria();
                fputc(letra, arquivo);
            }

            if (j < numPalavras - 1) {
                fputc(' ', arquivo);
            }
        }

        fputc('\n', arquivo);
    }
}

int main() {
    srand(time(NULL));  // Inicializa a semente aleatória

    FILE *arquivo = fopen("texto_aleatorio.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    gerarTextoAleatorio(arquivo);

    fclose(arquivo);

    printf("Texto aleatório gerado e salvo no arquivo 'texto_aleatorio.txt'.\n");

    return 0;
}
