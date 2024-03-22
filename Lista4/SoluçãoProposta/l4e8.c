#include <stdio.h>
int main()
{
	int sexo;
	float altura, peso, pesoideal;
	
	printf("Sexo: \n[1]Masculino \n[2]Feminino\n");
	scanf("%i", &sexo);
	
	printf("Altura: ");
	scanf("%f", &altura);
	
	printf("Peso: ");
	scanf("%f", &peso);
	
	if (sexo==1){
		
		pesoideal = (72.7 * altura) - 62;
		
		if ((pesoideal*(1-0.05)) <= peso && peso <= (pesoideal*(1+0.05))){
		printf("Voce este no peso ideal");
		} else if (peso <  (pesoideal*(1-0.05))){
			printf("Voce este abaixo do peso ideal");
		} else if ( peso > (pesoideal*(1+0.05))){
			printf("Voce este acima do peso ideal");
		}
	}else{
		pesoideal = (62.1 * altura) - 48.7;
		
		if ((pesoideal*(1-0.05)) <= peso && peso <= (pesoideal*(1+0.05))){
		printf("Voce este no peso ideal");
		} else if (peso <  (pesoideal*(1-0.05))){
			printf("Voce este abaixo do peso ideal");
		} else if ( peso > (pesoideal*(1+0.05))){
			printf("Voce este acima do peso ideal");
		}
	}
	return 0;
}
