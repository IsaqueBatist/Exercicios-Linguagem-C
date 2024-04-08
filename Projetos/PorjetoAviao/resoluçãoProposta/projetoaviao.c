#include <stdio.h>
#include <string.h>

int main(){
	float pesoAviao, comprimentoPista, velocidadeVento, altitudeAeroporto, tamanhoExcedente;
	int situacaoPeso=0, situacaoVento=0, situacaoAltitude=0, situacaoComprimento=0;
	char razao[200];
	char razaoPeso[] = "\nO aviao e muito pesado";
	char razaoComprimento[] = "\nComprimento insuficiente da pista";
	char razaoVelocidade[] = "\nAlta velocidade do vento.";
	char razaoAltitude[] = "";
	
	//Dados
	printf("Peso do Aviao: ");
	scanf("%f", &pesoAviao);
	
	printf("Comprimento da Pista: ");
	scanf("%f", &comprimentoPista);
	
	printf("Velocidade do Vento: ");
	scanf("%f", &velocidadeVento);
	
	printf("Altitude do Aeroporto: ");
	scanf("%f", &altitudeAeroporto);
	
	//Condições
	//Peso
	if (pesoAviao >=150000){
		strcat(razao, razaoPeso);
	}else {
		situacaoPeso= 1;
	}
	//Comprimento
	if (pesoAviao <= 100000 && comprimentoPista >= 1500 || pesoAviao > 100000 && comprimentoPista >= 2000){
			situacaoComprimento = 1;
		}else {
			strcat(razao, razaoComprimento);
		}
	//Velocidade
	if (velocidadeVento <=30){
		situacaoVento = 1;
		} else {
			strcat(razao, razaoVelocidade);
		}
	// Altitude
	if (altitudeAeroporto <= 1000 && comprimentoPista >=1500){
			situacaoAltitude = 1;
		} else {
			tamanhoExcedente = altitudeAeroporto -1000 + 500;
		}
	//Situação voo
	if (situacaoPeso==1 && situacaoVento==1 && situacaoAltitude==1 && situacaoComprimento == 1){
		printf("O avião pode decolar sem problemas");
	} else
		if (situacaoAltitude==0){
			printf("O aviao nao pode decolar devido aos seguintes motivos:\n %s", razao);
			printf("\nA altitude não atenedeu aos requisitos, por conta disso, a pista agora passa a ter tamanho minimo de %.2fm",tamanhoExcedente);
		} else {
		printf("O aviao nao pode decolar devido aos seguintes motivos:\n %s", razao);
	}
	return 0;
}

