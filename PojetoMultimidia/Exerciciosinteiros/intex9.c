/*9. Dados n e dois n�meros inteiros positivos i e j diferentes de 0,
imprimir em ordem crescente os n primeiros naturais que s�o m�ltiplos de i ou de j e ou de ambos.
Exemplo: Para n = 6 , i = 2 e j = 3 a sa�da dever� ser : 0,2,3,4,6,8.*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n,i,j,cont=0,mult=0;
    setlocale(LC_ALL,"");

    printf("Digite o maior n�mero da sequ�ncia: ");
    scanf("%i", &n);

    printf("Digite um valor: ");
    scanf("%i", &i);

    printf("Digite outro valor: ");
    scanf("%i", &j);

    printf("Os valores divisiveis por %i e %i na sequencia de 0 a %i s�o:", i,j,n);
    while (cont < n)
    {
          /* verifica se mult e' multiplo de i ou j */
          if (mult%i == 0 || mult%j == 0)
        {
          printf(" %d", mult);
              cont = cont + 1;;
        }
          /* vamos para o proximo candidato */
          mult++;
    }

    return 0;
}

