#include<stdio.h>

void main() {
    int i, soma = 0;
    
    printf("Numeros: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
        soma += i;
    }
    
    printf("\nSoma: %d", soma);
}