#include <stdio.h>
#define TAM 10
/*
    10. Receber 10 números e armazená-los em um vetor. Copiar os números em outro vetor na ordem inversa e mostrar na tela todas as posições
    em que se tem o mesmo número nos dois vetores.
*/
int main(){

  int vetor[TAM];
  int vetorInverso[TAM];
  int i, j=TAM-1;

  for(i=0;i<10;i++){
    printf("Digite um valor para a posicao %i do vetor: ", i);
    scanf("%i", &vetor[i]);
  }

  for(i=0;i<10;i++){
        vetorInverso[i] = vetor[j];
        j--;
    }
printf("\nPosicoes em que se tem o mesmo numero nos dois vetores: ");

  for(i=0;i<10;i++){
   if(vetor[i] == vetorInverso[i]){
        printf("%i ", i);
   }
  }
printf("\n");
for(i=0;i<10;i++){
   printf("\nVetor: %i || VetorInverso: %i", vetor[i], vetorInverso[i]);
  }
  return 0;
}

