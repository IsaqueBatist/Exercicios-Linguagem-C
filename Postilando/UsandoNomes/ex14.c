#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[30];
    char nome2[30];
    int tamNome1, tamNome2;

    printf("Digite o primeiro nome: ");
    fgets(nome1, 30, stdin);
    fflush(stdin);
    nome1[strcspn(nome1, "\n")] = 0;
    tamNome1=strlen(nome1);

    printf("Digite o seugndo nome: ");
    fgets(nome2, 30, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    tamNome2=strlen(nome2);

    printf("%s contem %i letras \n%s contem %i letras", nome1,tamNome1,nome2,tamNome2);




    return 0;
}
