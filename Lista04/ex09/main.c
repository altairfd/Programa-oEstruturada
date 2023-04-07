#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int main() {
    int dia, mes, ano;
    srand(time(NULL));
    do {
        dia = rand() % 31 + 1;
        mes = rand() % 12 + 1;
        ano = rand() % (2023 - 2000 + 1) + 2000;
    } while ((mes == 2 && dia > 28 + ehBissexto(ano)) || 
             ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) ||
             (ano == 2022 && mes == 12 && dia > 29));
    printf("Data aleatória gerada: %02d/%02d/%04d\n", dia, mes, ano);
    return 0;
}