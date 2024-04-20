//4. Dados um inteiro x e um inteiro não-negativo n, calcular x^n
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n,x,i, resultado=1;
    setlocale(LC_ALL,"");

    printf("\nValor de x: ");
    scanf("%i", &x);

    printf("\nValor de n: ");
    scanf("%i", &n);

    for (i=1;i<=n;i++)
    {
        resultado *= x;

    }
    printf("\n %i elevado a %i é: %i", x,n,resultado);
    return 0;
}

