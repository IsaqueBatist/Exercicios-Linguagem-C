/*7.Escreva um programa que solicite ao usu�rio o sal�rio mensal
 e calcule o sal�rio anual com base nesse valor. Considere que um ano tem 12 meses.*/
#include <stdio.h>
int main()
{
	float salario,salarioanual;
	
	printf("Qual o seu sal�rio mensal?");
	scanf("%f", &salario);
	
	salarioanual = salario*12;
	
	printf("\nSeu sal�rio anual � aproximadamente %.2f",salarioanual);
	
	return 0;
}

