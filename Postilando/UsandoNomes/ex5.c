#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    char nome[30];
    char endereco[30];
    float numeroTelefone;

    setlocale(LC_ALL,"");

    printf("\nDigite seu nome: ");
    fgets(nome, 30, stdin);

    printf("\nDigite seu endereço: ");
    fgets(endereco, 30, stdin);

    printf("\nDigite seu número de telefone: ");
    scanf("%f", &numeroTelefone);


    printf("Olá %s, segue seus dados: \nEndereço: %s; \nNúmero de telefone: %.0f", nome, endereco, numeroTelefone);

    return 0;
}
