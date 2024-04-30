#include <stdio.h>
#include <string.h>

int main()
{
   char palavra[30];
   int i,j,tam;

   printf("Digite uma palavra: ");
   fgets(palavra, 30, stdin);
   palavra[strcspn(palavra, "\n")] = 0;
   tam = strlen(palavra);

   for(i=0; i<tam; i++){
        for(j=0;j<i; j++)
            printf("%s\t", palavra);
        printf("\n");
   }

    return 0;
}
