#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char nome[30];


    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);

    for(i=0;i<4;i++){
        printf("%c\n", nome[i]);
    }
    return 0;
}
