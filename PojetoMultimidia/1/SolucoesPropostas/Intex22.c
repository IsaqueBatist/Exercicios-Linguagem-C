 /* (POLI 89) Dados n e uma seqüência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento máximo.*/
#include <stdio.h>

int main(void)
{
    int i,n=1,nAnterior, tamanho=0;

    printf("Digite uma sequencia de números: [0 para parar]");
    scanf("%i", &n);
    nAnterior=n;
    while(n!=0)
    {
        scanf("%i", &n);
        if(nAnterior<n)
        {
            tamanho++;
        } else {
            continue;
        }
    }
    printf("Na sequencia, o comprimento do segmento crescente máximo é: %i", tamanho);

}
