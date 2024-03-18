/*9.Desenvolva um programa que solicite ao usuário um valor principal,
 a taxa de juros e o período de tempo em anos. Calcule e exiba o valor final com juros simples.*/
#include <stdio.h>
int main()
{
	float valorprincipal,taxa,valorfinal;
	int anos;
	
	printf("Qual o valor prncipal?");
	scanf("%f", &valorprincipal);
	
	printf("Qual a taxa?");
	scanf("%f", &taxa);
	
	printf("Por quantos anos?");
	scanf("%i", &anos);
	
	valorfinal = valorprincipal + (valorprincipal * taxa/100 * anos);
	
	printf("\nO valor final com juros simples é %.2f", valorfinal);
	
	return 0;
}

