#include <stdio.h>
#define TAM 12
/*
5. Receber 12 números e armazená-los em um vetor.
    Ao final, exibir quais foram os números positivos informados.
*/
int main()
{
    int vetor[TAM];
    int i, num;

    for(i=0;i<TAM;i++){
        printf("\nValor para a posicao %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("\nValores positivos armazenados: ");
    for(i=0;i<TAM;i++){
        if(vetor[i] >= 0){
            printf("%i ", vetor[i]);
        }else {
            continue;
        }
    }
    return 0;
}
