#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lotofacil[15]; 
    int i, j, novo_num;

    srand(time(NULL)); 
    for (i = 0; i < 15; i++) {
        do {
            novo_num = rand() % 25 + 1; 
            for (j = 0; j < i; j++) {
                if (lotofacil[j] == novo_num) {
                    novo_num = 0; 
                    break;
                }
            }
        } while (novo_num == 0);
        lotofacil[i] = novo_num; 
    }

    printf("Números sorteados: ");
    for (i = 0; i < 15; i++) {
        printf("%d ", lotofacil[i]);
    }
    printf("\n");

    return 0;
}
