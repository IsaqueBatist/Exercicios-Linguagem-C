#include <stdio.h>
#define TAM 10
/*
1. ​Receber 10 números e armazená-los em um vetor.
    Ao final, exibir os números na ordem que foram recebidos.

*/
int main()
{
    int vetor[TAM];
    int i, num;

    for(i=0;i<TAM;i++){
        printf("\nValor para a posicao %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("\nValores armazenadoss: ");
    for(i=0;i<TAM;i++){
        printf("%i ", vetor[i]);
    }




    return 0;
}
