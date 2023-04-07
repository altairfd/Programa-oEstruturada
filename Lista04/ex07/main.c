#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int i, num;
    srand(time(NULL));
    printf("Números gerados: ");
    for (i = 0; i < 3; i++) {
        num = rand() % 900 + 100;
        num = num - (num % 5); 
        printf("%d ", num);
    }
    printf("\n");
}