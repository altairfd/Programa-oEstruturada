#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    

    int num1 = rand() % 100;
    int num2 = rand() % 100;
    

    int soma = num1 + num2;

    int resposta;
    printf("Qual é a soma de %d e %d? ", num1, num2);
    scanf("%d", &resposta);
    

    if (resposta == soma) {
        printf("Parabéns, você acertou!\n");
    } else {
        printf("Resposta incorreta. A soma de %d e %d é %d.\n", num1, num2, soma);
    }
    
    return 0;
}