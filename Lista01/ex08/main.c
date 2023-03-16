#include<stdio.h>

void main() {
    int numero;

    printf("Informe o valor de numero\n");
    scanf("%i", &numero);
    printf("numero: %i \n", numero);

    printf("Resultado: %i, %i, %i, %i, %i", numero-2, numero-1, numero, numero+1, numero+2);
}