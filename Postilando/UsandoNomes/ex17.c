#include <stdio.h>
#include <string.h>

int main()
{
   char palavra[30];
   int totalVogais=0, tam, i;
   float porcentagem;

   printf("Digite uma frase: ");
   fgets(palavra, 30, stdin);
   palavra[strcspn(palavra, "\n")] = 0;
   tam = strlen(palavra);

   for(i=0;i<tam;i++){
    if(palavra[i]=='A' || palavra[i]=='a' || palavra[i]=='E' || palavra[i]=='e' || palavra[i]=='I' || palavra[i]=='i' || palavra[i]=='O' || palavra[i]=='o' || palavra[i] == 'U' || palavra[i] == 'u')
    {
        totalVogais++;
    }
   }
   porcentagem = totalVogais*100/tam;

   printf("O nome nos trouxe os seguintes dados: ");
   printf("\n%s", palavra);
   printf("\nTotal de caracteres: %i", tam);
   printf("\nTotal de vogais: %i", totalVogais);
   printf("\nPorcentagem de vogais: %.2f%%", porcentagem);
    return 0;
}
