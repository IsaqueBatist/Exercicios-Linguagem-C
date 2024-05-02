#include <stdio.h>
int main()
{
    int num1,num2,num3;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%i", &num3);

    media = (num1+num2+num3)/3;

    printf("A media entre os valores selecionados e: %.2f", media);
    return 0;
}

