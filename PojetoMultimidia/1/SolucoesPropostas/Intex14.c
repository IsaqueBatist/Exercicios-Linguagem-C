/*14.  Um matem�tico italiano da idade m�dia conseguiu modelar o ritmo de crescimento da popula��o de coelhos
 (1) atrav�s de uma seq��ncia de n�meros naturais que passou a ser conhecida como seq��ncia de Fibonacci (2).
  O n-�simo n�mero da seq��ncia de Fibonacci Fn � dado pela seguinte f�rmula de recorr�ncia:*/
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
