#include <stdio.h>
#define TAM 10
/*
8. Receber n�meros do usu�rio para preencher um vetor de 10 posi��es, por�m,
 s� � permitido armazenar no vetor n�meros positivos (repetir at� que as 10 posi��es do vetor estejam preenchidas).
    No final, exiba a soma de todos os n�meros que est�o nas posi��es �mpares do vetor.
*/

int main(){
    int vetor[TAM];
    int i, num, soma=0;

    for(i=0;i<TAM;i++){
        printf("Valor na posicao %i:", i);
        scanf("%i", &vetor[i]);
        while(vetor[i]<0){
            printf("Sao permitidos apenas valores positivos.");
            scanf("%i", &vetor[i]);
        }
        if(i%2!=0){
            soma+= vetor[i];
        } else {
            continue;
        }
    }
    printf("A soma de todos os numeros que estao nas posicoes inpares do vetor e: %i", soma);
}
