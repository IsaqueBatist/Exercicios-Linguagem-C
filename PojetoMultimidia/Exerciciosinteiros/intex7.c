/*7. Dados n e uma seq��ncia de n n�meros inteiros, determinar a soma dos n�meros pares.*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n, i, soma=0;
    setlocale(LC_ALL,"");

    printf("Digite um n�mero: ");
    scanf("%i", &n);

    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            soma+=i;
        }
    }
    printf("A soma dos n�meros pares da sequencia �: %i", soma);
    return 0;
}

