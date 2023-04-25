#include <stdio.h>

int main() {
    int n;
    printf("Digite a altura do triângulo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        if (i == n) {
            for (int k = n - 1; k >= 1; k--) {
                for (int l = 1; l <= k; l++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    }

    return 0;
}