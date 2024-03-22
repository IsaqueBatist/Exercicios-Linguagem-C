#include <stdio.h>
int main()
{
	float altura,peso,IMC;

	printf("Altura(m): ");
	scanf("%f", &altura);	
	
	printf("\nPeso(kg): ");
	scanf("%f", &peso);	
	
	IMC = peso/(altura*altura);
	printf("Seu IMC e: %.2f",IMC);
	
	if (IMC < 18.5){
		printf("\nAbaixo do peso");
	} else if (18.5 <= IMC && IMC < 25){
		printf("\nPeso Ideal");
	} else if (25 <= IMC && IMC < 30){
		printf("\nSobrepeso");
	} else if (30 <= IMC && IMC < 35){
		printf("\nObesidade Grau I");
	} else if (35 <= IMC && IMC < 40){
		printf("\nObesidade Grau II");
	} else{
		printf("\nObesidade Grau III");
	}
	return 0;
}

