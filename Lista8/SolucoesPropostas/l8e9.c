#include <stdio.h>
#define TAM 10
/*
9. Receber 10 n�meros e armazen�-los em um vetor.
    Ap�s esta primeira etapa � necess�rio pedir para o usu�rio digitar um n�mero.
    Verificar se este n�mero est� armazenado no vetor e se estiver mostrar quantas vezes o n�mero esta armazenado no vetor, ou seja, quantas vezes o n�mero se repete.
     Se o n�mero n�o estiver no vetor, uma mensagem deve indicar esta condi��o e dever� ser solicitado um novo n�mero para o usu�rio.
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

