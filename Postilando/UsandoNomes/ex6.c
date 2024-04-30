#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    char nome[30];
    char sexo;
    int idade;

    setlocale(LC_ALL,"");

    printf("Nome: ");
    fgets(nome, 30, stdin);

    printf("\nSexo [M/F]:");
    scanf("%c", &sexo);

    printf("\nIdadde: ");
    scanf("%i", &idade);

    if(sexo == 'F' && idade<25){
        printf("%s \n ACEITA", nome);
    } else {
        printf("NÃO ACEITA");
    }
    return 0;
}
