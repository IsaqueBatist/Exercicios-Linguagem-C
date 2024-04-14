#include <stdio.h>

int main()
{
	float altura, alturaMulheres=0, mediaAlturaMulheres, menor, maior;
	int i, sexo, sexoMaiorPessoa, numHomens=0, numMulheres=0;
	
	for(i=0;i<3;i++)
	{
		printf("Sexo:\n[1]Masculino \n[2]Feminino\n");
		scanf("%i", &sexo);
		
		printf("\nAltura: ");
		scanf("%f", &altura);
		
		if(i==0)
		{
			menor = altura;
			maior = altura;
			sexoMaiorPessoa = sexo;
		} 
		if(altura < menor){
			menor = altura;
		} else
			if(altura>maior)
			{
				maior = altura;
				sexoMaiorPessoa = sexo;
			}
			
		if(sexo==2){
			alturaMulheres+=altura;
			numMulheres++;
		} else {
			numHomens++;
		}	
	}
	mediaAlturaMulheres = alturaMulheres/numMulheres;
	
	
	if(sexoMaiorPessoa==1){
		printf("Menor Altura do Grupo: %.1f \nMedia de altura das mulheres %.2f \nNumero de homens: %i \nSexo pessoa mais alta: Masculino", menor, mediaAlturaMulheres,numHomens);
	} else
	{
		printf("Menor Altura do Grupo: %.1f \nMedia de altura das mulheres %.2f \nNumero de homens: %i \nSexo pessoa mais alta: Feminino", menor, mediaAlturaMulheres,numHomens);	
	}

	return 0;
}
