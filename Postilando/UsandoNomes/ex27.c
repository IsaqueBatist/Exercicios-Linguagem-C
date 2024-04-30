#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    int i,vogais=0,consoantes=0,tam;

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);
    nome[strcspn(nome,"\n")] = 0;
    tam = strlen(nome);

    for(i=0;i<tam;i++){
        if(nome[i]=='A' || nome[i]=='a' || nome[i]=='E' || nome[i]=='e' || nome[i]=='I' || nome[i]=='i' || nome[i]=='O' || nome[i]=='o' || nome[i] == 'U' || nome[i] == 'u')
        {
            vogais++;
        } else if (nome[i] !=' '){
            consoantes++;
        }
    }
    printf("Total de vogais: %i\nTotal de consoantes: %i", vogais,consoantes);


    return 0;
}
