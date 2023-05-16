#include <stdio.h>

void imprime_numeros(int n) {
    int i, j;
    for (i = n-5; i <= n; i++) {
        if (i >= 0 && i % 2 != 0) {
            printf("%d ", i);
        }
    }
    for (j = n+1; j <= n+5; j++) {
        if (j % 2 == 0) {
            printf("%d ", j);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    imprime_numeros(n);
    return 0;
}
