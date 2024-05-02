//3.  Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n,i, impar=1;
    setlocale(LC_ALL,"");

    printf("Digite um número: ");
    scanf("%i", &n);

    printf("Os %i primeiros numeros naturais ímpares: ", n);
    for (i=0; i < n; i++)
    {
        printf("%i ", impar);
        impar += 2;
    }
    printf("\nFIM");

    return 0;
}
