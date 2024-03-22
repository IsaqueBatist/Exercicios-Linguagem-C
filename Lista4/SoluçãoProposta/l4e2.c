#include <stdio.h>
int main()
{
	float num=0, intervaloI=0,intervaloF=0;
	
	printf("Digite o inicio do Intervalo: ");
	scanf("%f", &intervaloI);
	
	printf("\nDigite o final do Intervalo: ");
	scanf("%f", &intervaloF);
	
	printf("\nDigite um numero: ");
	scanf("%f", &num);

	if (num==intervaloI || num == intervaloF){
		printf("%.1f esta em uma das extremidades", num);
	}else if(intervaloI < num && num < intervaloF){
		printf("%.1f est� dentrdo do intervalo de %.1f e %.1f", num, intervaloI, intervaloF);
	}else{
			printf("%.1f esta fora do intervalo de %.1f e %.1f", num, intervaloI, intervaloF);
	}
	
	return 0;	
}
