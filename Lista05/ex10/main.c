#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[20], i;

    srand(time(NULL));
    for (i = 0; i < 20; i++) {
        vetor[i] = rand() % 26 + 97;
    }

    printf("Vetor com a mascara de inteiros %%d: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Vetor com a mascara de caracteres %%c: ");
    for (i = 0; i < 20; i++) {
        printf("%c ", vetor[i]);
    }
    printf("\n");

    return 0;
}
