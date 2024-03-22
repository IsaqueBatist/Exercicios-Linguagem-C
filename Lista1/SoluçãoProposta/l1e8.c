#include <stdio.h>
#include <stdio.h>
/* 8. A disciplina Algoritmos e Programação é dividida em duas partes: teoria e prática.
Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada). Na prática também vale a mesma fórmula.
As notas das duas partes se juntam no final do semestre para compor a nota do aluno na disciplina, 
mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. 
Receba as notas de um aluno em cada prova teórica e prática e mostre a nota final do semestre dele na disciplina. */
int main()
{
  float pt1,pt2,pp1,pp2,notafinal; //pt = prova teorica e pp= prova prática
  //teoria
  printf("Quaol foi sua nota na p1 da parte teorica? ");
  scanf("%f", &pt1);
  printf("Qual foi sua nota na p2 da parte teorica? ");  
  scanf("%f", &pt2);
  //pratica
  printf("Quaol foi sua nota na p1 da parte pratica? ");
  scanf("%f", &pp1);
  printf("Qual foi sua nota na p2 da parte pratica? ");  
  scanf("%f", &pp2);
  //resultado
  notafinal = (pt1+pt2)*0.6 + (pp1+pp2)*0.4;
  printf("Sua nota no final do semestre e %.2f", notafinal);
  return 0;
}

