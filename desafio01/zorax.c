#include<stdio.h>

void main() {
    double distancia;
    double veloluz = 299792458;
	double distanM;
	double tempo;
	
    printf("Informe a distancia entre os planetas: ");
    scanf("%lf", &distancia);
    
	distanM = distancia * 1000; //passando para metros
	tempo = distanM / veloluz;
	
	printf("Tempo segundos: %lf \n", tempo);
	
	tempo = tempo/60;
	printf("Tempo minutos: %lf \n", tempo);
	
	tempo = tempo/60;
	printf("Tempo horas: %lf \n", tempo);

}
