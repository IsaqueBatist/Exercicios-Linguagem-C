#include <stdio.h>
int main ()
{
	float num1,num2,num3;
	printf("Digite o primeiro n�mero");
	scanf("%f", &num1);
	
	printf("\nDigite o segundo n�mero");
	scanf("%f", &num2);
	
	printf("\nDigite o terceiro n�mero");
	scanf("%f", &num3);
	
	if (num1==num2 || num2==num1 || num1==num3 || num2==num3)
	{
		printf("Existe numeros repetidos entre %.1f %.1f %.1f", num1,num2,num3);
	}else
	{
		printf("N�o existe n�meros repetidos entre %.1f %.1f %.1f", num1,num2,num3);
	}
	
	return 0;
}
