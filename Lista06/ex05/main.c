#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[10][10];
    srand(time(NULL));
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            matriz[i][j] = rand()%101; 
        }
    }

    int maior = matriz[0][0], menor = matriz[0][0];

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }

    printf("Matriz:\n");
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
