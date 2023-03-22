#include<stdio.h>

void main() {
    float c;
    float resultado;

    printf("Informe a temperatura em celsius: \n");
    scanf("%f", &c);

    resultado = c*9/5+32;
    printf("A temperatura convertida é: %.1f", resultado);
}