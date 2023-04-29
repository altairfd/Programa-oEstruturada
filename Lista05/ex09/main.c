#include <stdio.h>

int main() {
    int vetor[11], i;


    for (i = 0; i < 11; i++) {
        vetor[i] = 10 + i;
    }

    printf("Elementos pares do vetor de tras para frente: ");
    for (i = 10; i >= 0; i--) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\nNumeros impares do vetor: ");
    for (i = 0; i < 11; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}