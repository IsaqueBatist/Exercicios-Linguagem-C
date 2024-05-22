#include <stdio.h>
#define TAM 10
/*

2. Receber 10 números e armazená-los em um vetor.
    Ao final, exibir os números na ordem inversa da que foram recebidos.

*/
int main()
{

    int vetor[TAM];
    int i, num;

    for(i=0;i<TAM;i++){
        printf("\nValor para a posicao %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("\nValores armazenadoss em ordem reversa: ");
    for(i=TAM-1;i>=0;i--){
        printf("%i ", vetor[i]);
    }


    return 0;
}
