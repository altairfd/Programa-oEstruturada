#include<stdio.h>

void main() {

    int i;
    
    for (i = 1; i <= 10; i++) {
        printf("Altair DiasT\n");
    }
    
    printf("\n");
    for (i = 1; i <= 10; i++) {
        printf("Altair Dias");
        if (i < 10) {
            printf(", ");
        }
    }
}