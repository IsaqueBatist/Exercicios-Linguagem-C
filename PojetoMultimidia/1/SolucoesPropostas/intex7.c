/*7. Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n, i, soma=0;
    setlocale(LC_ALL,"");

    printf("Digite um número: ");
    scanf("%i", &n);

    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            soma+=i;
        }
    }
    printf("A soma dos números pares da sequencia é: %i", soma);
    return 0;
}

