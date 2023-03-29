#include<stdio.h>

void main() {
    int i;
    
    for (i = 0; i <= 100; i++) {
        if (i % 4 == 0 && i != 0) { 
            printf("plim ");
        } else {
            printf("%d ", i);
        }
    }
}