#include <stdio.h>

int main()
{
	float salario, totalSalario, mediaSalario, mediaNumFilhos, maior, porcentual;
	int numFilhos=0, totalNumFilhos=0, i, qunatidadedoPorcentual=0;	
	
	for (i=0;i<5;i++)
	{
			printf("\nSalario:");
			scanf("%f", &salario);
			
			printf("\nNumero de Filhos:");
			scanf("%i", &numFilhos);
			
			totalSalario+=salario;
			totalNumFilhos+=numFilhos;	
			
			if (i==0){
				maior = salario;
			} else 
				if(salario>maior){
					maior = salario;
				}
			if(salario <=1000){
				qunatidadedoPorcentual++;
			}
	}
	mediaSalario = totalSalario/5;
	mediaNumFilhos = totalNumFilhos/5;
	porcentual = qunatidadedoPorcentual*100/5;
	printf("%i", totalNumFilhos);
	
	printf("\nMedia do salario da populacao: %.2f \nMedia do Numero de Filhos: %.2f \nMaior salario: %.2f \nPorcentual de pessoas com salario de ate R$10000: %.1f%%", 	mediaSalario, mediaNumFilhos, maior,porcentual);
	return 0;
}
