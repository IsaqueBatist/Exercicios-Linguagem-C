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

    printf("\nDigite seu endere�o: ");
    fgets(endereco, 30, stdin);

    printf("\nDigite seu n�mero de telefone: ");
    scanf("%f", &numeroTelefone);


    printf("Ol� %s, segue seus dados: \nEndere�o: %s; \nN�mero de telefone: %.0f", nome, endereco, numeroTelefone);

    return 0;
}
