#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime_intervalo(int n1, int n2) {
    int i;
    if (n1 < n2) {
        for (i = n1+1; i < n2; i++) {
            printf("%d ", i);
        }
    } else if (n2 < n1) {
        for (i = n2+1; i < n1; i++) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n1, n2;
    srand(time(NULL));
    n1 = rand() % 101;
    n2 = rand() % 101;
    printf("N1 = %d, N2 = %d\n", n1, n2);
    imprime_intervalo(n1, n2);
    return 0;
}
