/*10.  Dizemos que um n�mero natural � triangular se ele � produto de tr�s n�meros naturais consecutivos.*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
   int i,num;
   setlocale(LC_ALL,"");

   printf("Digite um n�mero para verificar se ele � triangular: ");
   scanf("%i", &num);

   for (i=0;i*(i+1)*(i+2)<num;i++);
   if(i*(i+1)*(i+2) == num){
    printf("O n�mero � tri�ngular");
   } else {
    printf("O n�mero n�o � tri�ngular");
   }

    return 0;
}

