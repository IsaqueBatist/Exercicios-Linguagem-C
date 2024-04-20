/*6.  Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e suas notas da primeira prova,
 determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0).*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n, i;
    float nota=-1, maior, menor;
    setlocale(LC_ALL,"");

    printf("Número de Alunos: ");
    scanf("%i", &n);

    for(i=1; i<=n; i++)
    {
        printf("\nNota do %i° Aluno (0-100): ", i);
        scanf("%f", &nota);
        if(i==1){
            maior = nota;
            menor = nota;
        }else if (nota > maior){
            maior = nota;
        }else if (nota < menor){
            menor = nota;
        }
    }
    printf("A maior nota foi: %.2f, e a menor nota foi: %.2f", maior, menor);
    return 0;
}

