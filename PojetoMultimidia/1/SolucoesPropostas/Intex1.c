#include <stdio.h>
#include <locale.h>

int main(void)
{
    int numero, quadrado;
    setlocale(LC_ALL,"");
    while(numero!= 0)
    {
        printf("\nDigite um n�mero para ver seu quadrado [0 para parar]: ");
        scanf("%i", &numero);
        quadrado = numero * numero;
        printf("\nO quadrado de %i �: %i", numero, quadrado);
    }
    printf("\nFim do programa");

    return 0;
}
