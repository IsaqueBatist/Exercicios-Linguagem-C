/*6.Crie um programa que pe�a ao usu�rio o n�mero de horas regulares e o n�mero de horas
 extras trabalhadas, juntamente com as taxas de pagamento para ambas as categorias.
  Calcule e exiba o sal�rio total incluindo horas extras (se houver).*/
#include <stdio.h>
int main()
{
	int horasregulares,horasextras;
	float valorhr,valorhe, salario;
	
	printf("Quantas horas regulares voc� trabalhou?");
	scanf("%i", &horasregulares);
	
	printf("Quanto vale a hora regular?");
	scanf("%f", &valorhr);
	
	printf("Quantas horas extras?");
	scanf("%i", &horasextras);
	
	printf("Quanto vale a hora extra?");
	scanf("%f", &valorhe);
	
	salario = (horasregulares * valorhr) + (horasextras * valorhe);
	
	printf("\nO seu sal�rio com suas horas trabalhadas � %.2f", salario);
	
}

