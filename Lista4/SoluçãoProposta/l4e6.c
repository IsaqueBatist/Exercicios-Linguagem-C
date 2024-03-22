#include <stdio.h>
int main()
{
	int opcao;
	float num1, num2, soma, sub, mult, div;
	
	printf("Digite o primeiro n�mero");
	scanf("%f", &num1);
	
	printf("Digite o segundo n�mero");
	scanf("%f", &num2);
	
	printf("Escolha a opera��o \n[1] para adicao \n[2] para subtracao \n[3] para multiplicacao \n[4] para divisao\n");
	scanf("%i", &opcao);
	
	if (opcao == 1){
		soma = num1 + num2;
		printf("A soma entre %.1f e %.1f e: %.1f", num1, num2, soma);
	} else if (opcao == 2){
		sub = num1-num2;
		printf("A subtracao entre  %.1f e %.1f e: %.1f", num1, num2, sub);
	} else if (opcao == 3){
		mult = num1*num2;
		printf("A multiplicacao entre %.1f e %.1f e: %.1f", num1, num2, mult);
	} else {
		div = num1/num2;
		printf("A divis�o entre %.1f e %.1f � %.1f", num1, num2, div);
	}
	return 0;
}
