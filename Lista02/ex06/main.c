#include<stdio.h>

void main() {
    float ganhoH;
    float horas;
    float salarioB;
    float inss = 0.08;
    float ir = 0.11;
    float sind = 0.05;
    float desInss;
    float desir;
    float desSind;
    float resultado;

    printf("Informe seu ganho por hora: \n");
    scanf("%f", &ganhoH);
    printf("informe o total de hroas trabalhadas ao mes: \n");
    scanf("%f", &horas);

    salarioB = ganhoH*horas;
    printf("Salario bruto: R$%.2f \n", salarioB);

    resultado = salarioB*inss;
    desInss = resultado;
    printf("Total pago para INSS: R$%.2f \n", resultado);

    resultado = salarioB*sind;
    desSind = resultado;
    printf("Total pago paa SINDICATO: R$%.2f \n", resultado);

    resultado = salarioB*ir;
    desir = resultado;
    printf("Total pago para IMPOSTO DE RENDA: R$%.2f \n", resultado);

    resultado = salarioB-desInss-desir-desSind;
    printf("Total liquido: R$%.2f", resultado);

    //100-14*100;
}