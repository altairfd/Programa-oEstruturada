#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

void imprimirConteudo(FILE *arquivo) {
    char linha[MAX_SIZE];

    printf("Conteúdo do arquivo:\n");

    while (fgets(linha, MAX_SIZE, arquivo) != NULL) {
        printf("%s", linha);
    }

    printf("\n");
}

int contarLinhas(FILE *arquivo) {
    int linhas = 0;
    char ch;

    while ((ch = fgetc(arquivo)) != EOF) {
        if (ch == '\n') {
            linhas++;
        }
    }

    return linhas;
}

void buscarPorLetra(FILE *arquivo, char letra) {
    char linha[MAX_SIZE];

    printf("Pokémons com nome iniciando por '%c':\n", letra);

    while (fgets(linha, MAX_SIZE, arquivo) != NULL) {
        if (linha[0] == letra) {
            printf("%s", linha);
        }
    }

    printf("\n");
}

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "pokemon.txt";
    char opcao;
    char letra;

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    do {
        printf("Menu de Opções:\n");
        printf("1 - Ler e imprimir o conteúdo do arquivo\n");
        printf("2 - Contar quantas linhas tem o arquivo\n");
        printf("3 - Buscar por pokémons com nome iniciando por uma letra\n");
        printf("0 - Sair\n");

        printf("Digite a opção desejada: ");
        scanf(" %c", &opcao);
        printf("\n");

        switch (opcao) {
            case '1':
                imprimirConteudo(arquivo);
                break;

            case '2':
                printf("O arquivo possui %d linhas.\n\n", contarLinhas(arquivo));
                break;

            case '3':
                printf("Digite uma letra: ");
                scanf(" %c", &letra);
                printf("\n");
                buscarPorLetra(arquivo, letra);
                break;

            case '0':
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Por favor, tente novamente.\n\n");
                break;
        }
    } while (opcao != '0');

    fclose(arquivo);

    return 0;
}
