/*4.Fa�a um programa que solicite ao usu�rio uma dist�ncia em metros
 e, em seguida, converta e exiba a dist�ncia equivalente em p�s. 1 metro � aproximadamente igual a 3,28084 p�s.*/
#include <stdio.h>
int main()
{
	float m,pes;
	
	printf("Digite a dist�ncia em metros: ");
	scanf("%f", &m);
	
	pes = m*3.28084;
	
	printf("\n%.2f m � aproximadamente %.2f pes", m, pes);
	
 	return 0;
}

