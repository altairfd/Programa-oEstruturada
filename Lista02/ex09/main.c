#include<stdio.h>

void main() {
    int n;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    if (n >= 100 && n <= 200) {
        printf("Numero entre 100 e 200");
    } else {
        printf("Numero fora da faixa");
    }
}