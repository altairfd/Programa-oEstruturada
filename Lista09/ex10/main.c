#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LARGURA 60
#define ALTURA 100

// Função para gerar um número aleatório dentro de um intervalo
int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Função para gerar a imagem colorida com as especificações fornecidas
void gerarImagemColorida() {
    // Abrir o arquivo no modo de escrita
    FILE *arquivo = fopen("imagem.ppm", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo de imagem.\n");
        return;
    }

    // Escrever o cabeçalho do arquivo PPM
    fprintf(arquivo, "P3\n");
    fprintf(arquivo, "# imagem.ppm\n");
    fprintf(arquivo, "%d %d\n", LARGURA, ALTURA);
    fprintf(arquivo, "255\n");

    // Gerar a imagem colorida com pixels aleatórios de acordo com as especificações
    srand(time(NULL));

    for (int i = 0; i < ALTURA; i++) {
        for (int j = 0; j < LARGURA; j++) {
            int r = 0, g = 0, b = 0;

            if (i < 20) {
                r = gerarNumeroAleatorio(0, 55);
                g = gerarNumeroAleatorio(0, 55);
                b = gerarNumeroAleatorio(0, 55);
            } else if (i < 40) {
                r = gerarNumeroAleatorio(45, 105);
                g = gerarNumeroAleatorio(45, 105);
                b = gerarNumeroAleatorio(45, 105);
            } else if (i < 60) {
                r = gerarNumeroAleatorio(95, 155);
                g = gerarNumeroAleatorio(95, 155);
                b = gerarNumeroAleatorio(95, 155);
            } else if (i < 80) {
                r = gerarNumeroAleatorio(145, 205);
                g = gerarNumeroAleatorio(145, 205);
                b = gerarNumeroAleatorio(145, 205);
            } else {
                r = gerarNumeroAleatorio(195, 255);
                g = gerarNumeroAleatorio(195, 255);
                b = gerarNumeroAleatorio(195, 255);
            }

            fprintf(arquivo, "%d %d %d ", r, g, b);
        }
        fprintf(arquivo, "\n");
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("Arquivo imagem.ppm criado com sucesso.\n");
}

int main() {
    // Gerar a imagem colorida com as especificações fornecidas
    gerarImagemColorida();

    return 0;
}
