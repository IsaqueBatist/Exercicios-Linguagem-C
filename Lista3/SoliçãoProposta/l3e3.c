/* 3. Como no exercício anterior, calcular a média. Se a média for maior ou igual a 5 escreva “aprovado”,
 senão calcule e mostre quanto faltou para atingir 5. */
 
 #include <stdio.h>
 int main()
 {
 	int p1, p2, restante;
 	float M;
 	
	printf("Nota da P1 ");
	scanf("%i", &p1); 	
 	
 	printf("Nota da P2 ");
	scanf("%i", &p2);
	
	M = (p1+p2)/2;
	
	if (M>=5){
	printf("APROVADO");	
			}	
	else{
		restante = 5 - M;
		printf("REPROVADO por %i ponto(s)", restante);
		}
 	return 0;
 }
