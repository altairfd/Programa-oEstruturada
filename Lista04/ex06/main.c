#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int i, num;
    srand(time(NULL));
    printf("Números gerados: ");
    for (i = 0; i < 3; i++) {
        do {
            num = rand() % 900 + 100;
        } while (num % 5 != 0);
        printf("%d ", num);
    }
    printf("\n");
}