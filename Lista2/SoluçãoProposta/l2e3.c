/*3.Crie um programa que solicite ao usuário a distância em quilômetros e, em seguida,
 converta e exiba a distância equivalente em milhas. 1 quilômetro é aproximadamente igual a 0,621371 milhas.*/
#include <stdio.h>
int main()
{
	float km,milhas;
	
	printf("Digite a distância em Km: ");
	scanf("%f", &km);
	
	milhas = km*0.621371;
	
	printf("\n%.2f Km é aproximadamente %.2f milhas", km, milhas);
	
 	return 0;
}


