/*13. Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
Exemplo: 6 é perfeito, pois 1+2+3 = 6.
Dado um inteiro positivo n, verificar se n é perfeito.
*/
#include <stdio.h>

int main()
{
    int i,num,soma=0;

    printf("Digite um número para verificar se e perfeito: ");
    scanf("%i", &num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            soma+=i;
        } else {
            continue;
        }
    }
    if(soma==num){
        printf("O numero e perfeito");
    } else {
        printf("O numero nao e perfeito");
    }

    return 0;
}
