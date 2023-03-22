#include<stdio.h>

void main() {
    float n1;
    float n2;
    float d1;
    float resultado;

    printf("Informe o valor de n1: \n");
    scanf("%f", &n1);
    printf("Informe o valor de n2: \n");
    scanf("%f", &n2);
    printf("Informe o valor de d1: \n");
    scanf("%f", &d1);


    resultado = (n1*2)/n2; 
    printf("O produto do dobro do primeiro com metade do segundo: %.0f\n", resultado);

    resultado = (n1*3)+d1;
    printf("A soma do triplo do primeiro com o terceiro: %.0f \n", resultado);

    resultado = d1*d1*d1;
    printf("O terceiro elevado ao cubo: %.0f \n", resultado);


}