#include <stdio.h>
//6. Calcular o per�metro de uma circunfer�ncia recebendo seu raio. 
//C = 2 *  * r 
//(utilizar  = 3.14). 
int main()
{
  float perimetro, raio, pi = 3.14;
  printf("Digite o raio da circunferencia");
  scanf("%f", &raio);
  perimetro = 2*pi*raio;
  printf("O perimetro da circunferencia de raio %.2f � %.2f", raio, perimetro);
  return 0;
}

