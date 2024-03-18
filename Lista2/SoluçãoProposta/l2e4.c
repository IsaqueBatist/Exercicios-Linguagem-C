/*4.Faça um programa que solicite ao usuário uma distância em metros
 e, em seguida, converta e exiba a distância equivalente em pés. 1 metro é aproximadamente igual a 3,28084 pés.*/
#include <stdio.h>
int main()
{
	float m,pes;
	
	printf("Digite a distância em metros: ");
	scanf("%f", &m);
	
	pes = m*3.28084;
	
	printf("\n%.2f m é aproximadamente %.2f pes", m, pes);
	
 	return 0;
}

