#include <stdio.h>
#define TAM 100
/*
7. Preencher automaticamente um vetor com todos os n�meros pares entre 1 e 100 e depois exibir os n�meros para o usu�rio.
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
