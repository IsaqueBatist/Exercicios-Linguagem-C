#include <stdio.h>
/* 9. Na Dinamarca todo cidadão tem acesso à educação e saúde de qualidade através do pagamento de um imposto único sobre o salário,
 de 37%. Receber o salário bruto (valor do salário sem descontos) de um trabalhador dinamarquês e calcular o salário líquido
(valor do salário após os descontos). */ 
int main()
{
	float salariob,salariol;
	printf("Qual o seu salario bruto?");
	scanf("%f", &salariob);
	salariol = salariob*(1 - 0.37);
	printf("Seu salario descontado com o imposto de 37%% e de R$%.2f", salariol);
  return 0;
}
