/*8.Escreva um programa que solicite ao usu�rio
 o sal�rio atual de um funcion�rio e o percentual de aumento. Calcule e exiba o novo sal�rio ap�s o aumento.*/
#include <stdio.h>
int main()
{
	float salario,aumento, novosalario;
	
	printf("Qual o sal�rio do funcion�rio?");
	scanf("%f", &salario);
	
	printf("Qual a porcentagem do aumento?");
	scanf("%f", &aumento);
	
	novosalario = salario*(aumento/100 + 1);
	
	printf("\nO seu novo sal�rio com %.1f%% de aumento � %.2f", aumento, novosalario);
	
	return 0;
}

