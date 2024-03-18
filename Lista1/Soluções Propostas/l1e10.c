#include <stdio.h>
#include <time.h>
/* 10. Receber o ano de nascimento do usuário e dizer aproximadamente quantos dias de vida ele tem. */

int main()
{
	int ano, idade, dias;
	printf("Em que ano voce nasceu? ");
	scanf("%i", &ano);
	//obtendo o ano atual com <time.h>
	struct tm *data_hora_atual;     
	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);
	idade = (data_hora_atual->tm_year+1900) - ano;
	//calculando os dias
	dias = idade*365;
	printf("voce tem aproximadamente %i dias de vida", dias);
	
	
  return 0;
}
