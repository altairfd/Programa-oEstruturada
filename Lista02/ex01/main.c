#include<stdio.h>

void main() {
    float metros;
    float polegadas = 39.37f;
    float resultado;

    printf("Informe a quantidade em metros: \n");
    scanf("%f", &metros);

    resultado = metros*polegadas;
    printf("A conversão é: %.2f", resultado);
}