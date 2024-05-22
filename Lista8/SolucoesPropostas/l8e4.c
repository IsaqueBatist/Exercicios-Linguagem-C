#include <stdio.h>
#define TAM 15
/*
   4. Receber 15 números e armazená-los em um vetor.
    Ao final, exibir o dobro de cada um dos números.
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
