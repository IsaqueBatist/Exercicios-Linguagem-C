#include <stdio.h>
#include <string.h>

int main()
{
   char nome[30];
   int i, tam;

   printf("Digite seu nome:");
   fgets(nome, 30, stdin);
   nome[strcspn(nome, "\n")] = 0;
   tam= strlen(nome);
   printf("%i", tam);

   printf("Com seu nome, podemos verificar:\n");
   printf("O primeiro caracter %c\n", nome[0]);
   printf("O ultimo caracter %c\n", nome[tam-1]);
   printf("O quarto caracter %c\n", nome[3]);
   printf("Os caracteres do primeiro ao terceiro:\n");
   for(i=0;i<3;i++){
        printf("%c", nome[i]);
   }
   printf("\nDo primeito ao último caracter e suas posicoes:\n");
   for(i=0;i<tam;i++){
    printf("\ncaracter: %c\nPosicao: %i\n",nome[i], i);
   }

    return 0;
}
