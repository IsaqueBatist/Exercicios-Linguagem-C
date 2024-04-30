#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nome[30];
    char caracter;
    char nomeMaiusculo[30]= "";
    int i,tam;

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = 0;
    tam = strlen(nome);

    for(i=0;i<tam;i++){
        printf("%c", toupper(nome[i]));
    }

    return 0;
}
