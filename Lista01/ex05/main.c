#include<stdio.h>

void main() {
    int metros;
    int resultado;

    printf("Informe a quantidade em metros \n");
    scanf("%i", &metros);

    resultado = metros*100;
    printf("A conversão de %i metros para cenrimetros é: %i", metros, resultado);

}