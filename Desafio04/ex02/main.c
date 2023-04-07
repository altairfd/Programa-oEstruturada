#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma dos multiplos de 3 ou 5 abaixo de 1000 eh: %d\n", soma);

    return 0;
}