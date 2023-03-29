#include<stdio.h>

void main() {
    int i, j;
    
    for (i = 0; i <= 9; i++) {
        printf("Tabuada do %d:\n", i);
        
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        
        printf("\n"); 
    }
}