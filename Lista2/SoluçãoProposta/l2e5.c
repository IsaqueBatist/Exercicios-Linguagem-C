/*5.Escreva um programa que peça ao usuário para inserir um volume em galões e
, em seguida, converta e exiba o volume equivalente em litros. 1 galão é igual a aproximadamente 3,78541 litros.*/
#include <stdio.h>
int main()
{
	float vgalao,L;
	
	printf("Digite o volume em galões (1 galao = 3.78L) ");
	scanf("%f", &vgalao);	
	
	L = vgalao*3.78541;
	
	printf("\n%.2f galões equivale a %.2fL", vgalao,L);
	
	return 0;
}

