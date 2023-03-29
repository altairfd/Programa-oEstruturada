#include<stdio.h>

void main() {

    int i;
    
    for (i = 300; i >= 100; i--) {
        if (i % 4 == 0) { 
            printf("%d ", i);
        }
    }
}