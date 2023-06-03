#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumeroAleatorio() {
    return rand() % 201 - 100; 
}

int main() {
    srand(time(NULL));  

    FILE *arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 100; i++) {
        int numero = gerarNumeroAleatorio();
        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);

    printf("Números aleatórios gravados com sucesso no arquivo 'numeros.txt'.\n");

    return 0;
}
