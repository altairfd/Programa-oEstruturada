#include<stdio.h>

void main() {
    float raio;
    float pi = 3.14f;
    float resultado;

    printf("Informe o raio: \n");
    scanf("%f", &raio);

    resultado = raio*2*pi;
    printf("Perimetro: %.1f \n", resultado);

    resultado = pi*raio*raio;
    printf("Area: %.1f \n", resultado);
}