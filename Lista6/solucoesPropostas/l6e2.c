#include <stdio.h>

int main()
{
    int quantAlunos, quantDisciplinas, i,j;
    float  notafinalDisciplina, totalNotaFinal=0, media;

    printf("Quantidade de alunos cursando o 3 semestre: ");
    scanf("%i", &quantAlunos);

    for (i=1;i<=quantAlunos; i++)
    {
        printf("\nQuantidade de disciplinas cursado pelo %i aluno no semestre passado: ", i);
        scanf("%i", &quantDisciplinas);

        for(j=1;j<=quantDisciplinas;j++)
        {
            printf("Nota final na %i Disciplina: ", j);
            scanf("%f", &notafinalDisciplina);
            totalNotaFinal+=notafinalDisciplina;
        }
        media = totalNotaFinal/quantDisciplinas;
        printf("Media final do %i aluno: %.2f", i, media);
    }
    return 0;
}
