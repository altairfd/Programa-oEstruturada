#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int numeros[6];
    int i, j, num;
    srand(time(NULL));
    printf("Números gerados: ");
    for (i = 0; i < 6; i++) {
        do {
            num = rand() % 60 + 1;
            for (j = 0; j < i; j++) {
                if (numeros[j] == num) {
                    num = 0;
                    break;
                }
            }
        } while (num == 0);
        numeros[i] = num;
        printf("%d ", num);
    }
    printf("\n");
}