/*6. Receber numerador e denominador e calcular o resultado da divisão, desde que possível (denominador diferente de zero).
 Se não for possível dividir, apenas escreva “não existe divisão por zero”. */
 
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
 		printf("Não existe divisão por zero");
	 }
	else{
		divisao = numerador/denominador;
		printf("O resultado da divisão é: %.2f", divisao);
	}
 	return 0;
 }
