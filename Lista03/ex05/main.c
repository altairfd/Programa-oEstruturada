#include<stdio.h>

void main() {

    int i;
    
    for (i = 100; i <= 200; i++) {
        if (i % 3 == 0) { 
            printf("%d ", i);
        }
    }
}