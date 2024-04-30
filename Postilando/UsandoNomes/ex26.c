#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    int i,tam, auxiliar;

    printf("Digite um nome: ");
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = 0;
    tam = strlen(nome);
    auxiliar = tam;

    printf("\nCom esse nome podemos obter as seguintes informacoes:\n");
    printf("Primeiro caracter %c\n", nome[0]);
    printf("O ultimo caracter %c\n", nome[tam-1]);
    printf("O quarto caracter %c\n", nome[3]);
    printf("Do primeiro ao ultimo indicando suas posicoes:\n");
    for(i=0;i<tam;i++){
        printf("\nCaracter: %c | Posicao; %i\n", nome[i], i);
    }
    printf("\nQuantas letras o nome tem: %i\ n", tam);
    printf("Mostrar o nome de tras para frente:\n");
    for(i=0;i<tam;i++){
        printf("%c", nome[auxiliar-1]);
        auxiliar--;
    }

    return 0;
}

