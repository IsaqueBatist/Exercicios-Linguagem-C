//2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n, m, i, soma=0;
    setlocale(LC_ALL,"");

    printf("Digite um número: ");
    scanf("%i", &n);
    m=n;

    for (i=0; i<m; m--)
    {
        soma += m;
    }
    printf("A soma dos primeiros %i números é: %i", n, soma);
    return 0;
}
