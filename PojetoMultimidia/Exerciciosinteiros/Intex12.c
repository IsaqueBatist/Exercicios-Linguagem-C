#include <stdio.h>

int main() {
  int anterior,
      atual,
      resto;

  printf("Digite um numero inteiros positivos: ");
  scanf("%d" , &anterior);

    printf("Digite outro numero inteiros positivos: ");
    scanf("%d" , &atual);

  printf("MDC(%d,%d) = ", anterior, atual);

  resto = atual % anterior;
  while (resto != 0) {
    resto = anterior % atual;
    anterior = atual;
    atual = resto;
  }

  printf("%d\n", anterior);
  return 0;
}

