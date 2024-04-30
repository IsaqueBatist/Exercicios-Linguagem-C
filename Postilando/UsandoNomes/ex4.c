#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    int i;

    printf("Digite seu nome: ");
    fgets(nome,30,stdin);

    for(i=0;i<10;i++){
        printf("%s\n", nome);
    }


    return 0;
}
