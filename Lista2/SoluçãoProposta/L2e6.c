/*6.Crie um programa que peça ao usuário o número de horas regulares e o número de horas
 extras trabalhadas, juntamente com as taxas de pagamento para ambas as categorias.
  Calcule e exiba o salário total incluindo horas extras (se houver).*/
#include <stdio.h>
int main()
{
	int horasregulares,horasextras;
	float valorhr,valorhe, salario;
	
	printf("Quantas horas regulares você trabalhou?");
	scanf("%i", &horasregulares);
	
	printf("Quanto vale a hora regular?");
	scanf("%f", &valorhr);
	
	printf("Quantas horas extras?");
	scanf("%i", &horasextras);
	
	printf("Quanto vale a hora extra?");
	scanf("%f", &valorhe);
	
	salario = (horasregulares * valorhr) + (horasextras * valorhe);
	
	printf("\nO seu salário com suas horas trabalhadas é %.2f", salario);
	
}

