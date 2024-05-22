#include <stdio.h>
#define TAM 10
/*
9. Receber 10 números e armazená-los em um vetor.
    Após esta primeira etapa é necessário pedir para o usuário digitar um número.
    Verificar se este número está armazenado no vetor e se estiver mostrar quantas vezes o número esta armazenado no vetor, ou seja, quantas vezes o número se repete.
     Se o número não estiver no vetor, uma mensagem deve indicar esta condição e deverá ser solicitado um novo número para o usuário.
*/

int main(){

  int vetor[TAM];
  int i, num, contador=0, controle=1;

  for(i=0;i<TAM;i++){
    printf("Digite um valor para a posicao %i do vetor: ", i);
    scanf("%i", &vetor[i]);
  }

  printf("\nDigite um valor para fazer as validacoes: ");
  scanf("%i", &num);

while(controle !=0){
  for(i=0;i<TAM;i++){
        if(num == vetor[i]){
            contador++;
            }
        }

     if(contador > 0){
        printf("\nO numero esta no vetor, e se repete %i vezes", contador);
        controle = 0;
      } else {
        printf("\nO valor nao esta no vetor, tente novamente: ");
        scanf("%i", &num);
      }
  }

  return 0;
}

