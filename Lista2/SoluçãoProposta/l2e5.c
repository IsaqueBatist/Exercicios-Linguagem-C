/*5.Escreva um programa que pe�a ao usu�rio para inserir um volume em gal�es e
, em seguida, converta e exiba o volume equivalente em litros. 1 gal�o � igual a aproximadamente 3,78541 litros.*/
#include <stdio.h>
int main()
{
	float vgalao,L;
	
	printf("Digite o volume em gal�es (1 galao = 3.78L) ");
	scanf("%f", &vgalao);	
	
	L = vgalao*3.78541;
	
	printf("\n%.2f gal�es equivale a %.2fL", vgalao,L);
	
	return 0;
}

