/*4. Receber um sal�rio bruto e calcular o sal�rio l�quido (sal�rio bruto ap�s descontar impostos).
 Imposto sobre sal�rio de at� R$ 2750.00 � de 15%, para sal�rio maior que R$ 2750.00 � 25%. */
 #include <stdio.h>
 int main()
 {
 	float salariob, salariol;
 	printf("Sal�rio Bruto: ");
	scanf("%f", &salariob);
	
	if (salariob <= 2750){
		salariol = salariob*(1-0.15);
		printf("Seu sal�rio com 15%% de redu��o � de R$%.2f", salariol);
		} 	
	//Se n�o for o caso anterior, obrigatoriamente ser� o pr�ximo, sendo desnecess�rio utilizar outro if, nessas condi��es.
 	else{
 		salariol = salariob*(1-0.25);
	 	printf("Seu sal�rio com 25%% de redu��o � de R$%.2f", salariol);
	 }
 	return 0;
 }
