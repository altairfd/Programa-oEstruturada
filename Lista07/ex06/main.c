#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void decomposicao(int numero) {
    int unidade, dezena, centena, milhar;
    unidade = numero % 10;
    dezena = (numero % 100) / 10;
    centena = (numero % 1000) / 100;
    milhar = numero / 1000;
    printf("Número: %d\n", numero);
    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena*10);
    printf("Centena: %d\n", centena*100);
    printf("Milhar: %d\n", milhar*1000);
}

int main() {
    int numero;
    srand(time(NULL));
    numero = rand() % 9000 + 1000;
    decomposicao(numero);
    return 0;
}
