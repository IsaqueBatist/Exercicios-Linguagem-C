/*3.Crie um programa que solicite ao usu�rio a dist�ncia em quil�metros e, em seguida,
 converta e exiba a dist�ncia equivalente em milhas. 1 quil�metro � aproximadamente igual a 0,621371 milhas.*/
#include <stdio.h>
int main()
{
	float km,milhas;
	
	printf("Digite a dist�ncia em Km: ");
	scanf("%f", &km);
	
	milhas = km*0.621371;
	
	printf("\n%.2f Km � aproximadamente %.2f milhas", km, milhas);
	
 	return 0;
}


