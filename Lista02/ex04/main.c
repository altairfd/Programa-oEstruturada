#include<stdio.h>

void main() {
    float f;
    float resutlado;

    printf("Informe a temperatura em Farenheit: \n");
    scanf("%f", &f);

    resutlado = (f-32)*5/9;
    printf("A conversao para celsius: %.1f", resutlado);

}