/*7. Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês,
independente de utilizá-los integralmente ou não. Porém, se você utilizar mais do que 50 minutos,
é cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. Receber quantos minutos foram
gastos no mês e calcular o valor da conta. */

#include <stdio.h>
int main()
{
	int minutos, minutosultrapassados;
	float valor;
	
	printf("Você utilizou seu plano por quantos minutos? ");
	scanf("%i", &minutos);
	
	if (minutos>50){
		minutosultrapassados = minutos - 50;
		valor = 50 + minutosultrapassados * 1.5;
		printf("Você utilizou seu plano em um total de %i, ultrapassando seu limite, ou seja, com o adicional de R$1.50 por minutos, o valor do seu plano este mês é de R$%.2f", minutos,valor);
	}
	else{
		printf("Você não utilizou mais do que 50 minutos, sendo assim, o valor de sua fatura este mês é o padrão, R$50.00");
	}
	
	
	
	return 0;
}
