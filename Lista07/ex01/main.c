#include <stdio.h>

void imprime_sequencia(int start, int stop, int step) {
    int i;
    float valor;
    int n_valores = (stop - start) / step + 1; 
    
    for (i = 0; i < n_valores; i++) {
        valor = start + i * step;
        printf("%.2f ", valor); 
    }
    printf("\n"); 
}

int main() {
    int start, stop, step;
    printf("Digite o valor inicial da sequência: ");
    scanf("%d", &start);
    printf("Digite o valor final da sequência: ");
    scanf("%d", &stop);
    printf("Digite o espaçamento entre os valores da sequência: ");
    scanf("%d", &step);
    imprime_sequencia(start, stop, step);
    return 0;
}
