/* Receber a nota de um aluno no módulo 1 e no módulo 2 e calcular a média deles.
 O usuário só pode digitar notas no intervalo de 0 a 10, caso ele digite um valor inválido, deve digitar novamente.
*/
#include <stdio.h>

int main()
{
    int notaModulo1, notaModulo2, media;
    printf("Digite a nota do 1 Modulo: ");
    scanf("%i", &notaModulo1);
    while(notaModulo1<0 || notaModulo1>10){
        printf("ERRO,  digite uma nota entre 0 e 10\n");
        scanf("%i", &notaModulo1);
    }
    printf("Digite a nota do 2 Modulo: ");
    scanf("%i", &notaModulo2);
    while(notaModulo2<0 || notaModulo2>10){
        printf("ERRO,  digite uma nota entre 0 e 10\n");
        scanf("%i", &notaModulo2);
    }

    media= (notaModulo1+notaModulo2)/2;

    printf("A media entre as notas e: %i", media);


    return 0;
}
