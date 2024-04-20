/*8.  Dado um inteiro não-negativo n, determinar n!*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n,i,fatorial=1;
    setlocale(LC_ALL,"");

    printf("Digite o número inteiro não-negativo para saber seu fatorial: ");
    scanf("%i", &n);

    for(i=1; i<n; n--)
    {
        fatorial *= n;
    }
    printf("Faotiral: %i", fatorial);
    return 0;
}

