//1.Fa�a um programa que pe�a ao usu�rio para inserir sua idade e, em seguida, exiba a idade em meses.
#include <stdio.h>
int main()
{
	int idade, meses;
	
	printf("Quantos anos voc� tem?");
	scanf("%i", &idade);
	
	meses = idade * 12;
	
	printf("\nVoc� tem aproximadamente %i meses de idade", meses);
 	return 0;
}
