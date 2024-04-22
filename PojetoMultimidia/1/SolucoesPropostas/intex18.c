/*18.  Dados três números naturais, verificar se eles formam os lados de um triângulo retângulo.*/
#include <stdio.h>

int main()
{
    float x,y,z;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &x);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &y);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &z);

    if(x-y<z && z<x+y && x-z<y && y<x+z && y-z<x && x<y+z)
    {
        printf("O triangulo existe");
    } else {
    printf("O triangulo não existe");
    }
    return 0;
}
