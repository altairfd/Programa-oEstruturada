#include <stdio.h>

#define LARGURA_TOTAL 60
#define ALTURA_TOTAL 100
#define LARGURA_COR 60
#define ALTURA_COR 20

// Função para gerar arquivo de imagem PGM em escala de cinza com cinco tons específicos
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
    fprintf(arquivo, "%d %d\n", LARGURA_TOTAL, ALTURA_TOTAL);
    fprintf(arquivo, "255\n");

    // Gerar as cores da imagem
    int cores[] = {0, 64, 128, 192, 255};

    // Gerar cada linha da imagem com as cores específicas
    for (int i = 0; i < ALTURA_TOTAL; i++) {
        // Determinar a cor da linha atual
        int cor = cores[i / ALTURA_COR];

        // Escrever os pixels da linha com a cor específica
        for (int j = 0; j < LARGURA_TOTAL; j++) {
            fprintf(arquivo, "%d ", cor);
        }
        fprintf(arquivo, "\n");
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("Arquivo imagem.pgm criado com sucesso.\n");
}

int main() {
    // Gerar o arquivo de imagem PGM com os tons de cinza específicos
    gerarImagemPGM();

    return 0;
}
