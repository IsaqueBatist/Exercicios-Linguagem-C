/*6. Receber numerador e denominador e calcular o resultado da divis�o, desde que poss�vel (denominador diferente de zero).
 Se n�o for poss�vel dividir, apenas escreva �n�o existe divis�o por zero�. */
 
 #include <stdio.h>
 int main()
 {
 	int numerador, denominador;
 	float divisao;
 	printf("Numerador: ");
 	scanf("%i", &numerador);
 	
 	printf("Denominador: ");
 	scanf("%i", &denominador);                                      
 	
 	if (denominador == 0){
 		printf("N�o existe divis�o por zero");
	 }
	else{
		divisao = numerador/denominador;
		printf("O resultado da divis�o �: %.2f", divisao);
	}
 	return 0;
 }
