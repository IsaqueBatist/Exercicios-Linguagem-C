/*10.  Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos.*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
   int i,num;
   setlocale(LC_ALL,"");

   printf("Digite um número para verificar se ele é triangular: ");
   scanf("%i", &num);

   for (i=0;i*(i+1)*(i+2)<num;i++);
   if(i*(i+1)*(i+2) == num){
    printf("O número é triângular");
   } else {
    printf("O número não é triângular");
   }

    return 0;
}

