#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, Y;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    
    int array[N];
    printf("Digite os elementos do array:\n");
    for(int i=0; i<N; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Digite o valor de X: ");
    scanf("%d", &X);
    printf("Digite o valor de Y: ");
    scanf("%d", &Y);
    
    int tamanhoSubArray = Y - X + 1;
    int subArray[tamanhoSubArray];
    for(int i=X; i<=Y; i++){
        subArray[i-X] = array[i];
    }
    
    printf("Sub-array resultante:\n");
    for(int i=0; i<tamanhoSubArray; i++){
        printf("%d ", subArray[i]);
    }
    
    return 0;
}
