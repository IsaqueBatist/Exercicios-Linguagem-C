/*14.  Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos
 (1) através de uma seqüência de números naturais que passou a ser conhecida como seqüência de Fibonacci (2).
  O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência:*/
#include <stdio.h>

int main()
{
    int i,num,soma, termoanterior, termoposterior;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for(i=1;i<=num;i++)
    {
        if(i==1 || i==2)
        {
            termoanterior=1;
            termoposterior=1;
            soma=1;
        } else{
        soma = termoanterior + termoposterior;
        termoanterior = soma;//i3 = 2 i4=3 i5 = 5
        termoposterior = soma-termoposterior; //i3 = 1 i4 = 2 i5 = 3
        }
    }
    printf("O F%i e: %i",num,soma);
    return 0;
}
