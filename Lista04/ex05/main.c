#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int i, num;
    srand(time(NULL));
    printf("Números gerados: ");
    for (i = 0; i < 10; i++) {
        num = rand() % 101;
        printf("%d ", num);
    }
    printf("\n");
}