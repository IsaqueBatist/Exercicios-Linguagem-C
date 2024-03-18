#include <stdio.h>
//3. Receber um comprimento em metros e convertê-lo para centímetros
int main()
{
  float metros, centimetros;
  printf("Qual comprimento em metros deseja converter para centimetros? ");
  scanf("%f", &metros);
  centimetros = metros*100;
  printf("\n%.2f metros equivalem a %.2f centimetros", metros, centimetros);
}

