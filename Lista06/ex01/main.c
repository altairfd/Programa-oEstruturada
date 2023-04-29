#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[10][10], i, j;

    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 90 + 10;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
