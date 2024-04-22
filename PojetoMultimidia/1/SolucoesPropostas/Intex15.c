/* Dizemos que um número i é congruente módulo m a j se i % m = j % m.
  Exemplo: 35 é congruente módulo 4 a 39, pois 35 % 4 = 3 = 39 % 4.
Dados inteiros positivos n, j e m, imprimir os n primeiros naturais congruentes a j módulo m.*/
#include <stdio.h>

int main()
{
    int l=1,i,cont=0,n,j,m;

    printf("Digite um numero");
    scanf("%i", &n);

    printf("Digite mais um numero: ");
    scanf("%i", &j);

    printf("Digite outro numero: ");
    scanf("%i", &m);

    for(i=1;n!=0;i++)
    {
        if(i%m==j%m)
        {
            printf("%i ", i);
            n--;
        }
    }


    return 0;
}
