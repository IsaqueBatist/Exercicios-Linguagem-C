#include <stdio.h>
#define TAM 100
/*
7. Preencher automaticamente um vetor com todos os números pares entre 1 e 100 e depois exibir os números para o usuário.
*/
int main()
{
    int vetor[TAM];
    int i, num=1;

    for(i=0;i<TAM;i++){
        vetor[i] = num;
        num++;
    }
    printf("\nValores do vetor: ");
    for(i=0;i<TAM;i++){
        printf("\n%i", vetor[i]);
    }
    return 0;
}
