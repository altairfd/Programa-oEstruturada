#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivoEntrada = fopen("arquivo.txt", "r");
    FILE *arquivoSaida = fopen("arquivo_convertido.txt", "w");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    char caractere;

    while ((caractere = fgetc(arquivoEntrada)) != EOF) {
        if (islower(caractere)) {
            caractere = toupper(caractere);
        }
        fputc(caractere, arquivoSaida);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo convertido com sucesso.\n");

    return 0;
}
