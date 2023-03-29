#include<stdio.h>

void main() {
    int i, soma = 0;
    
    printf("Numeros pares: ");
    for (i = 0; i <= 100; i += 2) {
        printf("%d ", i);
        soma += i;
    }
    
    printf("\nSoma: %d", soma);
}