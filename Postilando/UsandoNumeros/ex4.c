#include <stdio.h>
int main()
{
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("O numero com um raejuste de 10%% corresponde a: %.2f", num*(1+0.1));
    return 0;
}

