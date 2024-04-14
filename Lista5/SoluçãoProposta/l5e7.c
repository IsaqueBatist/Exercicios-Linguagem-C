#include <stdio.h>

int main()
{
	float num, soma, media;
	int i, quantidadedeNumerosInicial=0, quantidadedeNumerosPositivos=0;
	
	printf("Quantidades de numeros a ser informado: ");
	scanf("%i", &quantidadedeNumerosInicial);
	
	for(i=0; i<quantidadedeNumerosInicial;i++)
	{
		printf("\nNumero:");
		scanf("%f", &num);
		if(num>0){
			soma+=num;
			quantidadedeNumerosPositivos++;
		}
	}
	media = soma/quantidadedeNumerosPositivos;
	printf("A media entre os numeros positivos e: %.2f", media);
	
	
	return 0;
}
