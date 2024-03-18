/*
1p - 3 - pao de alho - pacote =5 
1p - 5 - latinhas - cerveja
1p - 1 garrafa/2pessoas - cachaca
1p - 1 garrafa/2pessoa - refrigerante
1p - 500g por pessoa - carne	
1p - 1/2 - quejo qualo 
1p - 1/4pessoas - pacote = 400g
1p - 1pessoa - 100g - linguica  
1p - 1 pessoas - 2 pao_frances
1p - 1 pessoas 200g - frango
*/
#include <stdio.h>
#include <math.h>
int main()
{

	int homens,criancas,mulheres, totalpessoas, pao_frances;
	float talho, tfarofa, queijo, refrigerante1l, refrigerante, lcachaca, fardoc, linguica, carne, frango, pao_de_alho, cachaca, queijo_qualo,cerveja, farofa;
	
	printf("Quantos homes vão para o churrasco: ");
	scanf("%i", &homens);
	
	printf("Quantas mulheres vão para o churrasco: ");
	scanf("%i", &mulheres);
	
	printf("Quantas crianças vão para o churrasco: ");
	scanf("%i", &criancas);
	
	totalpessoas= homens + mulheres + criancas;
	
	pao_de_alho = totalpessoas/2; // aredondar
	talho = pao_de_alho * 4;
	
	cerveja = (mulheres/2 *3) + homens*5;
	fardoc = cerveja/12;
	
	cachaca = (totalpessoas - criancas)/2; //arredondar
	lcachaca= 0.565 * cachaca;
	
	refrigerante = (totalpessoas - homens/2)/2;
	refrigerante1l = refrigerante*2;

	queijo_qualo = totalpessoas/3; //arredondar
	queijo = queijo_qualo * 5;
	
	farofa  = totalpessoas/4; //arredondar
	tfarofa = farofa * 400;
	
	pao_frances = totalpessoas * 2;
	
	frango = (totalpessoas * 400)/1000;//kg
	
	linguica = (totalpessoas * 350)/1000; //kg
	
	carne = (totalpessoas * 500)/1000; //kg
	
	printf("Para o seu churrasco de %i pessoas, será necessário", totalpessoas);
	printf("\n %.0f pacotes de pao de alho, equivalente a %0.f pães de alho", ceil(pao_de_alho), talho);
	printf("\n %.0f latinhas de cerveja, equivalente a %.0f fardos de cerveja contendo 12 unidades", ceil(cerveja), ceil(fardoc));
	printf("\n %.0f garrafas de cachaças, equivalente a %.0f L, sendo que cada garrafa contem 565ml" , ceil(cachaca), ceil(lcachaca));
	printf("\n %.0f garrafas de refrigerantes de 2L, equivalente a %.0f L, ou %.0f garrafas de 1L", ceil(refrigerante), refrigerante1l, refrigerante1l);
	printf("\n %.0f pacotes de queijo coalho, dando um total de %0.f de espetos de queijo", ceil(queijo_qualo), queijo);
	printf("\n %.0f pacotes de farofa contendo 400g, dando um total de %0.fg de farofa, ou %.2f kg", ceil(farofa), tfarofa, tfarofa/1000);
	printf("\n %i Pães Franceses", pao_frances);
	printf("\n %.2f kg de frango", frango);
	printf("\n %.2f kg de linguiça", ceil(linguica));
	printf("\n %.2f kg de carne", carne );
	return 0;
}
