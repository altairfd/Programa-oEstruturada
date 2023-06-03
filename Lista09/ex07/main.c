#include <stdio.h>

#define LARGURA 100
#define ALTURA 256

// Função para gerar arquivo de imagem PGM em escala de cinza
void gerarImagemPGM() {
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

    // Gerar os tons de cinza e escrever no arquivo
    for (int i = 0; i < ALTURA; i++) {
        for (int j = 0; j < LARGURA; j++) {
            fprintf(arquivo, "%d ", i);
        }
        fprintf(arquivo, "\n");
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("Arquivo imagem.pgm criado com sucesso.\n");
}

int main() {
    // Gerar o arquivo de imagem PGM em escala de cinza
    gerarImagemPGM();

    return 0;
}
