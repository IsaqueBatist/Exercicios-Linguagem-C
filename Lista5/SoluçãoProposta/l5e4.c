#include <stdio.h>

int main(){
	float mediateoria, medialab, mediafinal;
	int i;
	for (i=0;i<50;i++)
	{
		printf("\nMedia Teoria: ");
		scanf("%f", &mediateoria);
		
		printf("\nMedia de Laboratorio: ");
		scanf("%f", &medialab);
		
		mediafinal = (mediateoria*0.6 + medialab*0.4);
		
		printf("\nSua media final e: %.2f", mediafinal);
		
		if(mediafinal >=7){
			printf("\nVoce foi bem");
		} else 
			if (mediafinal >= 5 && mediafinal <7){
				printf("\nVoce foi razoavel");
			} else {
				printf("\nVoce foi mal");
			}
	}
	return 0;
}
