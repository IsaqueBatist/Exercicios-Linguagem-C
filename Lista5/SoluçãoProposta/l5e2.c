#include <stdio.h>

int main(){
	float num;
	int i;
	for(i=0;i<10;i++)
	{
		printf("\nDigite um n�mero: ");
		scanf("%f", &num);
		
		if(num == 0){
			printf("\n0 e nulo.");
		} else
			if(num>0){
				printf("\n%.2f e positivo", num);
			} else {
				printf("\n%.2f e negativo", num);
			}
	}
	return 0;
}
