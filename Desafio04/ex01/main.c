#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, acertos = 0, erros = 0;
    float resposta, resultado;
    srand(time(NULL));
    
    printf("=== JOGO DE OPERACOES MATEMATICAS ===\n\n");
    printf("Instrucoes:\n- Digite 1 para adicao\n- Digite 2 para subtracao\n- Digite 3 para multiplicacao\n- Digite 4 para divisao\n\n");
    printf("Voce tem 3 chances para acertar a resposta. Vamos comecar!\n\n");

    for (int i = 1; i <= 10; i++) { 
        int num1 = rand() % 101;
        int num2 = rand() % 101;
        opcao = rand() % 4 + 1;

        printf("Questao %d: ", i);
        switch(opcao) {
            case 1:
                resultado = num1 + num2;
                printf("%d + %d = ", num1, num2);
                break;
            case 2:
                resultado = num1 - num2;
                printf("%d - %d = ", num1, num2);
                break;
            case 3:
                resultado = num1 * num2;
                printf("%d * %d = ", num1, num2);
                break;
            case 4:
                resultado = (float) num1 / num2;
                printf("%d / %d = ", num1, num2);
                break;
        }

        scanf("%f", &resposta);

        if (resposta == resultado) {
            acertos++;
            printf("Resposta correta!\n\n");
        } else {
            erros++;
            printf("Resposta incorreta. A resposta correta era %.2f\n\n", resultado);
        }

        if (erros == 3) { 
            printf("Fim de jogo. Voce acertou %d questoes e errou %d questoes.\n", acertos, erros);
            break;
        }
    }

    return 0;
}