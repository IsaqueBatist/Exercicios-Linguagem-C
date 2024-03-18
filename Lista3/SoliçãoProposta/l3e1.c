/* 1. Receber um número e informar se ele é negativo ou não é negativo. */
#include <stdio.h>
int main()
{
	int num;
	printf("Digite um número");
	scanf("%i", &num);
	if (num>0)
	{
		printf("%i é positivo", num);
	}
	else
	{
		printf("%i é negativo", num);
	}
	return 0;
}
