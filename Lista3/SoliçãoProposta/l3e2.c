/* 2. Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2)
Se a média for maior ou igual a 5 escreva “aprovado”, senão escreva “reprovado”. */
 
 #include <stdio.h>
 int main()
 {
 	int p1, p2;
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
		printf("REPROVADO");
		}
 	return 0;
 }
