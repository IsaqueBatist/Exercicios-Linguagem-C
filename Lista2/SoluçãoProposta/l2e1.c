//1.Faça um programa que peça ao usuário para inserir sua idade e, em seguida, exiba a idade em meses.
#include <stdio.h>
int main()
{
	int idade, meses;
	
	printf("Quantos anos você tem?");
	scanf("%i", &idade);
	
	meses = idade * 12;
	
	printf("\nVocê tem aproximadamente %i meses de idade", meses);
 	return 0;
}
