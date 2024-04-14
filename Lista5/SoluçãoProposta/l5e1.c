#include <stdio.h>

int main(){
	float num, dobro;
	int i;
	for (i=0;i<10;i++)
	{
		printf("Digite o numero: ");
		scanf("%f", &num);
		if (num==0){
			printf("Digite um numero Valido");
			printf("\nDigite o numero: ");
			scanf("%f", &num);
		}
		dobro = num*2;
		printf("\nO dobro de %.2f e: %.2f\n", num, dobro);
	}
	
	return 0;
}
