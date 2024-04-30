#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    int i,tam;

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);
    tam = strlen(nome);

    printf("\n%s", nome);
    printf("\n%c\n", nome[0]);

    for(i=0;i<=2;i++){
        printf("%c", nome[i]);
    }
}
