#include <stdio.h>
//1. Receber dois valores e calcular sua m�dia aritm�tica.
int main()
{
  float num1,num2, soma;
  printf("Digite um numero: ");
  scanf("%f", &num1);
  printf("Digite outro numero: ");
  scanf("%f", &num2);
  soma = num1 + num2;
  printf("A soma entre %.2f e %.2f e %.2f", num1,num2,soma);
}

