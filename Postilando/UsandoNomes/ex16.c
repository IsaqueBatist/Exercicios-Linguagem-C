#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[300];
    int tam= 41;



    while(tam>40){
        printf("Digite uma frase com no máximo 40 letras: ");
        fgets(palavra, 300, stdin);
        palavra[strcspn(palavra, "\n")] = 0;
        tam = strlen(palavra);
        if(tam < 40){
            printf("A frase atendeu ao requesito: \n%s", palavra);
        }
    }
    return 0;
}
