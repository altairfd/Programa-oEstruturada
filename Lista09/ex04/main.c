#include <stdio.h>

// Função para gerar arquivo de imagem PBM para um número específico
void gerarImagemPBM(int numero) {
    // Definir o nome do arquivo de acordo com o número
    char nomeArquivo[10];
    sprintf(nomeArquivo, "%d.pbm", numero);

    // Abrir o arquivo no modo de escrita
    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo %s.\n", nomeArquivo);
        return;
    }

    int largura = 7;
    int altura = 10;

    // Escrever o cabeçalho do arquivo PBM
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "# %s\n", nomeArquivo);
    fprintf(arquivo, "%d %d\n", largura, altura);

    // Definir os padrões para cada número de 0 a 9
    int padroes[10][10] = {
        {1, 1, 1, 1, 1, 1, 0},
        {0, 1, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1}
    };

    // Escrever os padrões do número no arquivo
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fprintf(arquivo, "%d ", padroes[numero][i]);
        }
        fprintf(arquivo, "\n");
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("Arquivo %s criado com sucesso.\n", nomeArquivo);
}

int main() {
    // Gerar arquivos de imagem PBM para os números de 0 a 9
    for (int i = 0; i < 10; i++) {
        gerarImagemPBM(i);
    }

    return 0;
}
