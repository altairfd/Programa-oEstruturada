#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}