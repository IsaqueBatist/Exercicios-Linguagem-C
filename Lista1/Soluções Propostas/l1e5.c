#include <stdio.h>
/*5. A velocidade média de um veículo em um percurso é dada através da
distância percorrida pelo tempo, ou seja, Vm = DS / Dt. Calcular a velocidade média
do veículo em uma estrada recebendo esses dois dados do percurso. */
int main()
{
  float distancia, tempo, vm;
  printf("Digite a distância em metros percorrida pelo veículo: ");
  scanf("%f", &distancia);
  printf("Digite o tempo em segundos que o veiculo percorreu essa distancia: ");
  scanf("%f", &tempo);
  vm = distancia/tempo;
  printf("\nAo percorrer uma distância de %.2fm em um tempo de %.2fs, o veículo atingiu uma velocidade media de %.2fm/s", distancia, tempo, vm);
  return 0;
}

