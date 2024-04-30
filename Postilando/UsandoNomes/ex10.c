#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    int i, somaA=0;

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);

    for(i=0;i<strlen(nome);i++){
        if(nome[i] == 'A' || nome[i]== 'a'){
            somaA++;
        }
    }

    printf("Seu nome tem %i letras A", somaA);

    return 0;
}
