#include <stdio.h>

int main(){
	float num, multiplicacao;
	int i;
	
	printf("Digite o n�mero para visualizar sua tabuada: ");
	scanf("%f", &num);
	
	for (i=0; i<=10; i++)
	{
		multiplicacao = num*i;
		printf("%.0f x %i = %.0f\n", num,i,multiplicacao);
	}
	return 0;
}
