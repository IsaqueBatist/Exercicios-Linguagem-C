/* 1. Receber um n�mero e informar se ele � negativo ou n�o � negativo. */
#include <stdio.h>
int main()
{
	int num;
	printf("Digite um n�mero");
	scanf("%i", &num);
	if (num>0)
	{
		printf("%i � positivo", num);
	}
	else
	{
		printf("%i � negativo", num);
	}
	return 0;
}
