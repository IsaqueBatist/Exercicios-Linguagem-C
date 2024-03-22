#include <stdio.h>
int main()
{
	float num1,num2,num3;
	printf("Digite o primeiro n�mero");
	scanf("%f", &num1);
	
	printf("\nDigite o segundo n�mero");
	scanf("%f", &num2);
	
	printf("\nDigite o terceiro n�mero");
	scanf("%f", &num3);
	
	if (num1>=num2 && num1>=num3)
	{
		printf("O maior n�mero entre %.1f %.1f e %.1f e: %.1f", num1,num2,num3,num1);
	} else if (num2>=num1 && num2>=num3)
	{
		printf("O maior n�mero entre %.1f %.1f e %.1f e: %.1f", num1,num2,num3,num2);
	} else
	{
		printf("O maior n�mero entre %.1f %.1f e %.1f e: %.1f", num1,num2,num3,num3);
	}
	
	return 0;
}
