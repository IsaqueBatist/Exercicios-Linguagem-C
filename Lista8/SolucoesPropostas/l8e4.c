#include <stdio.h>
#define TAM 15
/*
   4. Receber 15 n�meros e armazen�-los em um vetor.
    Ao final, exibir o dobro de cada um dos n�meros.
*/
int main()
{
    int vetor[TAM];
    int i, num;

    for(i=0;i<TAM;i++){
        printf("\nValor para a posicao %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("\nValores armazenados em seu dobro: ");
    for(i=0;i<TAM;i++){
        printf("%i ", vetor[i]*2);
    }
    return 0;
}
