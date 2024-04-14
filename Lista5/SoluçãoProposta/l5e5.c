#include <stdio.h>

int main(){
	float num, media, soma;
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("\nNumero: ");
		scanf("%f", &num);
		soma+=num;
	}
	
	media=soma/10;
	printf("\nA media dos numeros e: %.2f", media);
	return 0;
}
