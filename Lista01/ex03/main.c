#include<stdio.h>

void main() {
    int numero;

    printf("Informe o numero: \n");
    scanf("%i", &numero);

    numero = numero*2;
    printf("O dobro de %i: \n", numero);

    numero = numero*2;
    printf("O triplo de %i: ", numero);
    
}