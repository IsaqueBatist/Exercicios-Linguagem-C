//2.Escreva um programa que calcule e exiba a m�dia de tr�s n�meros inseridos pelo usu�rio.
#include <stdio.h>
int main()
{
	float n1,n2,n3, media;
	
	printf("Primeiro n�mero:");
	scanf("%f", &n1);
	
	printf("Segundo n�mero:");
	scanf("%f", &n2);
	
	printf("Terceiro n�mero:");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	printf("\nA m�dia entre %.2f, %.2f e %.2f � %.2f ", n1,n2,n3,media);
	
 	return 0;
}


