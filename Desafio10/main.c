#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_SIZE 100

void gerarSenhaAleatoria(char *senha, int tamanho, int incluirMaiusculas, int incluirMinusculas, int incluirEspeciais, int incluirNumeros) {
    const char caracteresMaiusculos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char caracteresMinusculos[] = "abcdefghijklmnopqrstuvwxyz";
    const char caracteresEspeciais[] = "$#@&";
    const char caracteresNumeros[] = "0123456789";

    char caracteresDisponiveis[MAX_SIZE] = "";

    if (incluirMaiusculas) {
        strcat(caracteresDisponiveis, caracteresMaiusculos);
    }

    if (incluirMinusculas) {
        strcat(caracteresDisponiveis, caracteresMinusculos);
    }

    if (incluirEspeciais) {
        strcat(caracteresDisponiveis, caracteresEspeciais);
    }

    if (incluirNumeros) {
        strcat(caracteresDisponiveis, caracteresNumeros);
    }

    int tamanhoDisponiveis = strlen(caracteresDisponiveis);

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        int indice = rand() % tamanhoDisponiveis;
        senha[i] = caracteresDisponiveis[indice];
    }

    senha[tamanho] = '\0';
}

int main() {
    int quantidadeSenhas;
    int tamanhoMinimo, tamanhoMaximo;
    int incluirMaiusculas, incluirMinusculas, incluirEspeciais, incluirNumeros;
    char nomeArquivo[MAX_SIZE];

    printf("Quantidade de senhas a serem geradas: ");
    scanf("%d", &quantidadeSenhas);

    printf("Tamanho mínimo da senha: ");
    scanf("%d", &tamanhoMinimo);

    printf("Tamanho máximo da senha: ");
    scanf("%d", &tamanhoMaximo);

    printf("Incluir letras maiúsculas? (1 - Sim, 0 - Não): ");
    scanf("%d", &incluirMaiusculas);

    printf("Incluir letras minúsculas? (1 - Sim, 0 - Não): ");
    scanf("%d", &incluirMinusculas);

    printf("Incluir caracteres especiais? (1 - Sim, 0 - Não): ");
    scanf("%d", &incluirEspeciais);

    printf("Incluir números? (1 - Sim, 0 - Não): ");
    scanf("%d", &incluirNumeros);

    printf("Digite o nome do arquivo para salvar as senhas geradas: ");
    scanf("%s", nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < quantidadeSenhas; i++) {
        int tamanhoSenha = tamanhoMinimo + (rand() % (tamanhoMaximo - tamanhoMinimo + 1));
        char senha[MAX_SIZE];

        gerarSenhaAleatoria(senha, tamanhoSenha, incluirMaiusculas, incluirMinusculas, incluirEspeciais, incluirNumeros);

        fprintf(arquivo, "%s\n", senha);
    }

    fclose(arquivo);

    printf("Senhas geradas e salvas com sucesso no arquivo '%s'.\n", nomeArquivo);

    return 0;
}
