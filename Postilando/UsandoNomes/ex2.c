#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char nome[30];

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);

    for (i=0;i<strlen(nome);i++){

        if(i%2==0){
            continue;
        } else {
            printf("%c\n", nome[i]);
        }
    }

    printf("%s", nome);



}
