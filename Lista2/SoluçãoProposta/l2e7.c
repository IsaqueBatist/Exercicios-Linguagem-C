/*7.Escreva um programa que solicite ao usuário o salário mensal
 e calcule o salário anual com base nesse valor. Considere que um ano tem 12 meses.*/
#include <stdio.h>
int main()
{
	float salario,salarioanual;
	
	printf("Qual o seu salário mensal?");
	scanf("%f", &salario);
	
	salarioanual = salario*12;
	
	printf("\nSeu salário anual é aproximadamente %.2f",salarioanual);
	
	return 0;
}

