#include <stdio.h>

void imprime_numeros(int n) {
    int i;
    for (i = 0; i <= n; i++) {
        printf("%d ", i);
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
