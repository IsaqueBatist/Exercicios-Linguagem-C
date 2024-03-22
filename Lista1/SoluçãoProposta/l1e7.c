#include <stdio.h>
/* 7. Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. 
Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no
mês e calcular o salário dele. */
int main()
{
  int horas, horasextras;
  printf("Quantas horas normais voce trabalhou este mes? ");
  scanf("%i", &horas);
  printf("Quantas horas extras você fez? ");
  scanf("%i", &horasextras);
  float salario = (horas*10) + (horasextras*15);
  printf("Voce ira receber um salario de R$%.2f por suas horas trabalhadas", salario);
  return 0;
}

