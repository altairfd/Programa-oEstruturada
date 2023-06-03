#include <stdio.h>

#define LARGURA 11
#define ALTURA 11

// Função para gerar arquivo de imagem PBM com um labirinto
void gerarLabirinto() {
    // Abrir o arquivo no modo de escrita
    FILE *arquivo = fopen("labirinto.pbm", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo de labirinto.\n");
        return;
    }

    // Escrever o cabeçalho do arquivo PBM
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "# labirinto.pbm\n");
    fprintf(arquivo, "%d %d\n", LARGURA, ALTURA);

    // Definir a matriz do labirinto
    int labirinto[ALTURA][LARGURA] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    // Escrever os valores do labirinto no arquivo
    for (int i = 0; i < ALTURA; i++) {
        for (int j = 0; j < LARGURA; j++) {
            fprintf(arquivo, "%d ", labirinto[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("Arquivo labirinto.pbm criado com sucesso.\n");
}

int main() {
    // Gerar o arquivo de imagem PBM com o labirinto
    gerarLabirinto();

    return 0;
}
