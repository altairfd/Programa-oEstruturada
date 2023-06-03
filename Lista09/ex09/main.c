#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LARGURA 60
#define ALTURA 100

// Função para gerar um número aleatório dentro de um intervalo
int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Função para gerar a imagem em escala de cinza com as especificações fornecidas
void gerarImagemCinza() {
    // Abrir o arquivo no modo de escrita
    FILE *arquivo = fopen("imagem.pgm", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo de imagem.\n");
        return;
    }

    // Escrever o cabeçalho do arquivo PGM
    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "# imagem.pgm\n");
    fprintf(arquivo, "%d %d\n", LARGURA, ALTURA);
    fprintf(arquivo, "255\n");

    // Gerar a imagem com tons de cinza aleatórios de acordo com as especificações
    srand(time(NULL));

    for (int i = 0; i < ALTURA; i++) {
        for (int j = 0; j < LARGURA; j++) {
            int valor = 0;

            if (i < 20)
                valor = gerarNumeroAleatorio(0, 55);
            else if (i < 40)
                valor = gerarNumeroAleatorio(45, 105);
            else if (i < 60)
                valor = gerarNumeroAleatorio(95, 155);
            else if (i < 80)
                valor = gerarNumeroAleatorio(145, 205);
            else
                valor = gerarNumeroAleatorio(195, 255);

            fprintf(arquivo, "%d ", valor);
        }
        fprintf(arquivo, "\n");
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("Arquivo imagem.pgm criado com sucesso.\n");
}

int main() {
    // Gerar a imagem em escala de cinza com as especificações fornecidas
    gerarImagemCinza();

    return 0;
}
