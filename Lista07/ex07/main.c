#include <stdio.h>

void euler() {
    int n;
    double e = 1.0, termo = 1.0;
    printf("n\tEuler (e)\n");
    printf("0\t%.10f\n", e);
    for (n = 1; n <= 20; n++) {
        termo /= n;
        e += termo;
        printf("%d\t%.10f\n", n, e);
    }
}

int main() {
    euler();
    return 0;
}
