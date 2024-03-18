/*8.Escreva um programa que solicite ao usuário
 o salário atual de um funcionário e o percentual de aumento. Calcule e exiba o novo salário após o aumento.*/
#include <stdio.h>
int main()
{
	float salario,aumento, novosalario;
	
	printf("Qual o salário do funcionário?");
	scanf("%f", &salario);
	
	printf("Qual a porcentagem do aumento?");
	scanf("%f", &aumento);
	
	novosalario = salario*(aumento/100 + 1);
	
	printf("\nO seu novo salário com %.1f%% de aumento é %.2f", aumento, novosalario);
	
	return 0;
}

