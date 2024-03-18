//2.Escreva um programa que calcule e exiba a média de três números inseridos pelo usuário.
#include <stdio.h>
int main()
{
	float n1,n2,n3, media;
	
	printf("Primeiro número:");
	scanf("%f", &n1);
	
	printf("Segundo número:");
	scanf("%f", &n2);
	
	printf("Terceiro número:");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	printf("\nA média entre %.2f, %.2f e %.2f é %.2f ", n1,n2,n3,media);
	
 	return 0;
}


