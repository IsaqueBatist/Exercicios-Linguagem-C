#include <stdio.h>

int main()
{
	float num, maior, menor;
	int i;

	for(i=0;i<10;i++)
	{
		printf("\nNumero:");
		scanf("%f", &num);
		if(i==0){
			maior = num;
			menor = num;
		}
		if(num>maior){
			maior=num;
		}
		if(num<menor){
			menor=num;
		}
	}
	printf("O maior numero e: %.2f \nO menor numero e: %.2f", maior,menor);	
	return 0;
}
