#include <stdio.h>
/*5. A velocidade m�dia de um ve�culo em um percurso � dada atrav�s da
dist�ncia percorrida pelo tempo, ou seja, Vm = DS / Dt. Calcular a velocidade m�dia
do ve�culo em uma estrada recebendo esses dois dados do percurso. */
int main()
{
  float distancia, tempo, vm;
  printf("Digite a dist�ncia em metros percorrida pelo ve�culo: ");
  scanf("%f", &distancia);
  printf("Digite o tempo em segundos que o veiculo percorreu essa distancia: ");
  scanf("%f", &tempo);
  vm = distancia/tempo;
  printf("\nAo percorrer uma dist�ncia de %.2fm em um tempo de %.2fs, o ve�culo atingiu uma velocidade media de %.2fm/s", distancia, tempo, vm);
  return 0;
}

