#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[30];
    char nome2[30];
    int i, tam1, tam2;

    printf("Primeiro nome: ");
    fgets(nome1, 30, stdin);
    nome1[strcspn(nome1,"\n")] = 0;
    tam1 = strlen(nome1);
    fflush(stdin);

    printf("Segundo nome: ");
    fgets(nome2, 30, stdin);
    nome2[strcspn(nome2,"\n")] = 0;
    tam2 = strlen(nome2);

    printf("\nCaracteres e posicoes do primeiro nome:\n");
    for(i=0;i<tam1;i++){
        printf("\nCaracter: %c | Posicao: %i\n", nome1[i], i);
    }
    printf("\nCaracteres e posicoes do segundo nome:\n");
     for(i=0;i<tam2;i++){
        printf("\nCaracter: %c | Posicao: %i\n", nome2[i], i);
    }

    return 0;
}
