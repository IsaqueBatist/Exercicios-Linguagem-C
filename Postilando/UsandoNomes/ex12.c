#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[30];
  char caracter;
  char novaPalavra[30] = "";
  int i,tam, controle;

  printf("Digite uma palavra: ");
  fgets(palavra, 30, stdin);
  palavra[strcspn(palavra, "\n")] = 0;
  tam = strlen(palavra);
  controle = tam-1; //1
  printf("\n%s ao contrário e: ", palavra);

  for(i=0;i<tam;i++){ //tam = 1
    printf("%c", palavra[controle]);
    controle--;
  }
    return 0;
}
