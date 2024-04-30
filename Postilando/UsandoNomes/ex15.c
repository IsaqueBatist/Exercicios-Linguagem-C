#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];

    printf("Digite o seu nome: ");
    fgets(nome, 30, stdin);

    if(nome[0] == 'a' || nome[0] == 'A'){
        printf("%s", nome);
    }

    return 0;
}
