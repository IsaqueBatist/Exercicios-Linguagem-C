#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];

    printf("Digite seu nome: \n");
    fgets(nome, 30, stdin);

    printf("seu nome tem %i letras", strlen(nome));
    return 0;
}
