/*5.  Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos.
 Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
  int  i,dia,quantidade, maior;

    setlocale(LC_ALL,"");
  for (i=1;i<=7;i++)
  {
      printf("Quantidade de discos vendidos no %i° dia: ", i);
      scanf("%i", &quantidade);
      if(i==1){
        maior = quantidade;
        dia = i;
      } else if ( quantidade > maior){
        maior = quantidade;
        dia = i;
      }
  }
  printf("A maior quantidade de discos vendidos foi: %i, no dia %i", maior, dia);
    return 0;
}

