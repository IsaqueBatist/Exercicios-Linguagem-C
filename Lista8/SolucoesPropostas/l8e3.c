#include <stdio.h>
#define TAM 8
/*
    3. Receber 8 números e armazená-los em um vetor.
     Ao final, pedir para o usuário escolher uma posição do vetor e exibir o número contido nela.
*/
int main()
{
    int vetor[TAM];
    int i, escolha;

    for(i=0;i<TAM;i++){
        printf("Digite o valor para a poiscao %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("Escolha uma posição do vetor para visualizar o valor contido [0-7]");
    scanf("%i", &escolha);

    while(escolha <0 || escolha>7){
        printf("Posicao inexistente, escolha uma posicao valida: ");
        scanf("%i", &escolha);
    }

    printf("%i", vetor[escolha]);
    return 0;
}
