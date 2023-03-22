#include<stdio.h>

void main() {
    int litrosQuadrados = 3;
    int litrosLata = 18;
    float precoLata = 80;
    float precoFianl;
    float area;
    float litros;
    float latas;

    printf("Informe o tamanho da area a ser pintada: ");
    scanf("%f", &area);

    litros = area / litrosQuadrados;
    latas = (litros / litrosLata) + 0.9999;

    precoFianl = latas * precoLata;

    printf("Latas necessarias: %.0f \n", latas);
    printf("Preco total: R$%.2f \n", precoFianl);
}