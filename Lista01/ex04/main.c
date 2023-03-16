#include<stdio.h>

void main() {
    int n1;
    int n2;
    int resultado;

    printf("Digite o valor de n1 \n");
    scanf("%i", &n1);

    printf("Informe o valor de n2\n");
    scanf("%i", &n2);

    resultado = n1+n2;
    printf("%i + %i: %i\n", n1, n2, resultado);

    resultado = n1-n2;
    printf("%i - %i: %i \n",n1, n2, resultado);

    resultado = n1*n2;
    printf("%i * %i: %i \n", n1, n2, resultado);

}