/* 5. Receber dois n�meros distintos e mostrar o maior deles.  */
#include <stdio.h> 
int main()
{
	int num1,num2, maior;
	printf("Digite um n�mero");
	scanf("%i", &num1);
	
	printf("Digite outro n�mero");
	scanf("%i", &num2);
	
	if (num1>num2){
		maior = num1;
		printf("O maior n�mero entre %i e %i � %i",num1,num2,maior);
	}
	
	return 0;
}
