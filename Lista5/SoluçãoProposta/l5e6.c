#include <stdio.h>

int main()
{
	float num;
	int i, numPositivo=0, numNegativo=0;
		
	for(i=0;i<10;i++)
	{
		
		printf("\nNumero:");
		scanf("%f", &num);
	
		if(num>0){
			numPositivo++;
		} else
			if(num<0)
			{
				numNegativo++;
			}
	}
	printf("Numeros positivos: %i  \nNumeros Negativos: %i", numPositivo, numNegativo);
	
	
	
	
	return 0;
}
