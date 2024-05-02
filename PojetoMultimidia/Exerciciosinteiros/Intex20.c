/* (FIS 88) Qualquer n�mero natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus dois primeiros e dois �ltimos d�gitos.
Exemplos:
1297: 12 e 97.
5314: 53 e 14.
Escreva um programa que imprime todos os milhares (4 algarismos) cuja raiz quadrada seja a soma das dezenas formadas pela divis�o acima.
Exemplo: raiz de 9801 = 99 = 98 + 01.
Portanto 9801 � um dos n�meros a ser impresso.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int i, part1,part2;
    for(i=1000; i<10000; i++)
    {
        part1 = i%100;
        part2 = i/100;
    if(sqrt(i) == part1+part2)
    {
        printf("%i\n", i);
    }
    }
    return 0;
}
