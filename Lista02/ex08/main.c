#include<stdio.h>

void main() {
    float tamArq;
    float veloInternet;
    float tempoDl;
    float tempodlSeg;
    float bitsByte = 8;
    float segEmMin = 60;

    printf("Informe o tamanho do arquivo (Mb): ");
    scanf("%f", &tamArq);

    printf("Informe a velocidade da internet (Mbs): ");
    scanf("%f", &veloInternet);

    tempodlSeg = ((tamArq * bitsByte) / veloInternet);

    tempoDl = tempodlSeg / segEmMin;

    printf("Tempo aprox: %.2f \n", tempoDl);

}