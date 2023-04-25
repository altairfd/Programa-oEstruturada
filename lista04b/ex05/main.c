#include <stdio.h>

int main() {
    int n, i, j, k = 0;

    printf("Digite a altura da pirâmide: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++, k = 0) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        while (k != 2 * i - 1) {
            printf("%d ", k + 1);
            k++;
        }

        printf("\n");
    }

    return 0;
}
