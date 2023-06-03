#include <stdio.h>
#include <math.h>

double degrau(double x) {
    if (x >= 0) {
        return 1;
    } else {
        return 0;
    }
}

double logistica(double x) {
    return 1 / (1 + exp(-x));
}

double tangenteHiperbolica(double x) {
    return tanh(x);
}

double sigmoideLinear(double x) {
    return x / (1 + fabs(x));
}

double gaussiana(double x) {
    return exp(-pow(x, 2));
}

int main() {
    double x = 1.5;
    
    double degrau_result = degrau(x);
    double logistica_result = logistica(x);
    double tangenteHiperbolica_result = tangenteHiperbolica(x);
    double sigmoideLinear_result = sigmoideLinear(x);
    double gaussiana_result = gaussiana(x);

    printf("Degrau: %.4f\n", degrau_result);
    printf("Logística (Sigmóide): %.4f\n", logistica_result);
    printf("Tangente Hiperbólica: %.4f\n", tangenteHiperbolica_result);
    printf("Sigmóide Linear: %.4f\n", sigmoideLinear_result);
    printf("Gaussiana: %.4f\n", gaussiana_result);

    return 0;
}
