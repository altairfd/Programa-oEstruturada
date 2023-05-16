#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simula_dado(int num_jogadas) {
    int i, num;
    int frequencia[6] = {0, 0, 0, 0, 0, 0}; 
    float porcentagem;
    srand(time(NULL)); 
    
    for (i = 0; i < num_jogadas; i++) {
        num = rand() % 6 + 1; 
        frequencia[num-1]++; 
    }
    
    printf("Frequencia de cada face:\n");
    for (i = 0; i < 6; i++) {
        porcentagem = (float)frequencia[i] / num_jogadas * 100; 
        printf("Face %d: %.2f%%\n", i+1, porcentagem);
    }
}

int main() {
    simula_dado(1000);
    return 0;
}
