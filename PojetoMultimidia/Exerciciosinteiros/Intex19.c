/*19.  Dados três números, imprimi-los em ordem crescente.*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, maior, menor, i;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    printf("Digite o terceiro número: ");
    scanf("%i", &num3);

    for (i=0;i<3;i++)
    {
        if(i==0)
        {
            maior = num1;
            menor = num1;
        } else if (num2>maior){
            maior=num2;
        } else if(num2< menor){
            menor=num2;
        } else if (num3>maior){
            maior=num3;
        } else if (num3<menor) {
            menor= num3;
        }
    }
    if(maior==num1 && menor==num2){
        printf("%i %i %i", num1,num3,num2);
    } else  if(maior==num2 && menor==num1){
        printf("%i %i %i", num2,num3,num1);
    } else  if(maior==num1 && menor==num3){
        printf("%i %i %i", num1,num2,num3);
    } else  if(maior==num3 && menor==num2){
        printf("%i %i %i", num3,num1,num2);
    } else  if(maior==num3 && menor==num1){
        printf("%i %i %i", num3,num2,num1);
    } else  if(maior==num2 && menor==num3){
        printf("%i %i %i", num2,num1,num3);
    }

    return 0;
}
