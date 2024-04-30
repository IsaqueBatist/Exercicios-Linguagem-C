#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    int i;

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);

    printf("\nImprimindo seu nome %i vezes\n", strlen(nome));
    for(i=0;i<strlen(nome); i++){
        printf("%s", nome);
    }

    return 0;
}
