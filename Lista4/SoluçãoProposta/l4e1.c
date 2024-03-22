/*1. Receber um n�mero e informar se ele � positivo, negativo ou nulo.*/
#include <stdio.h>
int main()
{
	float num;
	printf("Digite um n�mero: ");
	scanf("%f", &num);
	if (num > 0)
	{
		printf("\n%.1f e Positivo", num);
	}
	else 
	{
		if (num<0)
		{
			printf("\n%.1f e Negativo", num);
		}
		else
		{
			printf("\n%.1f e Nulo", num);	
		}
	}
	return 0;	
}
