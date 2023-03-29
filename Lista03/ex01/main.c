#include<stdio.h>

void main() {
    int quantidadeSkin;
    float precoTotal;
    
    printf("Digite o número de skins compradas: ");
    scanf("%d", &quantidadeSkin);
    
    if (quantidadeSkin < 10) {
        precoTotal = quantidadeSkin * 1.30;
    } else {
        precoTotal = quantidadeSkin * 1.00;
    }
    
    printf("O preço total da compra é: R$%.2f\n", precoTotal);
}