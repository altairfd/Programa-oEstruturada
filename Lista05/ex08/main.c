#include <stdio.h>
#include <math.h>

int main() {
    int numeros[5], cubos[5], i;

    printf("Digite cinco numeros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 5; i++) {
        cubos[i] = pow(numeros[i], 3);
    }

    printf("\nNumeros: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nCubos: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", cubos[i]);
    }

    return 0;
}
