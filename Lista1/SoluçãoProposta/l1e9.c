#include <stdio.h>
/* 9. Na Dinamarca todo cidad�o tem acesso � educa��o e sa�de de qualidade atrav�s do pagamento de um imposto �nico sobre o sal�rio,
 de 37%. Receber o sal�rio bruto (valor do sal�rio sem descontos) de um trabalhador dinamarqu�s e calcular o sal�rio l�quido
(valor do sal�rio ap�s os descontos). */ 
int main()
{
	float salariob,salariol;
	printf("Qual o seu salario bruto?");
	scanf("%f", &salariob);
	salariol = salariob*(1 - 0.37);
	printf("Seu salario descontado com o imposto de 37%% e de R$%.2f", salariol);
  return 0;
}
