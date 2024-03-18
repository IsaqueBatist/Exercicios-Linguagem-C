/*4. Receber um salário bruto e calcular o salário líquido (salário bruto após descontar impostos).
 Imposto sobre salário de até R$ 2750.00 é de 15%, para salário maior que R$ 2750.00 é 25%. */
 #include <stdio.h>
 int main()
 {
 	float salariob, salariol;
 	printf("Salário Bruto: ");
	scanf("%f", &salariob);
	
	if (salariob <= 2750){
		salariol = salariob*(1-0.15);
		printf("Seu salário com 15%% de redução é de R$%.2f", salariol);
		} 	
	//Se não for o caso anterior, obrigatoriamente será o próximo, sendo desnecessário utilizar outro if, nessas condições.
 	else{
 		salariol = salariob*(1-0.25);
	 	printf("Seu salário com 25%% de redução é de R$%.2f", salariol);
	 }
 	return 0;
 }
