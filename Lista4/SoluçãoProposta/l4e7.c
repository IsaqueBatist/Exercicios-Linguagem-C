#include <stdio.h>
int main ()
{
	float lado1,lado2,lado3;
	
	printf("Medida do lado 1: \n");
	scanf("%f", &lado1);
	
	printf("Medida do lado 3: \n");
	scanf("%f", &lado2);
	
	printf("Medida do lado 2: \n");
	scanf("%f", &lado3);
	
	if(lado1==lado2 && lado2==lado3 && lado3==lado1){
		printf("O triangulo e equilatero\n");
	} else if (lado1==lado2 || lado2==lado3 || lado1==lado3){
		printf("O triangulo e isoceles");
	} else{
		printf("O triangulo e escaleno");
	}
	
	return 0;
}
