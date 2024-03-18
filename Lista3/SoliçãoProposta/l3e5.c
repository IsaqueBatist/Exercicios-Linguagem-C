/* 5. Receber dois números distintos e mostrar o maior deles.  */
#include <stdio.h> 
int main()
{
	int num1,num2, maior;
	printf("Digite um número");
	scanf("%i", &num1);
	
	printf("Digite outro número");
	scanf("%i", &num2);
	
	if (num1>num2){
		maior = num1;
		printf("O maior número entre %i e %i é %i",num1,num2,maior);
	}
	
	return 0;
}
