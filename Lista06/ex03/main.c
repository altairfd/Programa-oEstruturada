#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int i, j;

    srand(time(NULL));
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 21 - 10;
        }
    }
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
