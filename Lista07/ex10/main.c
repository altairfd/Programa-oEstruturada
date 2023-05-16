#include <stdio.h>
#include <math.h>

double norma(int x, int y) {
    double resultado = sqrt(pow(x, 2) + pow(y, 2));
    return resultado;
}

int main() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("A norma do vetor (%d,%d) eh: %.2f", x, y, norma(x, y));
    return 0;
}
