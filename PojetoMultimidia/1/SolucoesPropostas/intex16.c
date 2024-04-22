#include <stdio.h>

int main() {
  int num,        /* numero dado (na base 2)             */
      pot2,       /* guardara uma potencia de 2          */
      final;      /* numero dado convertido para base 10 */

  printf("Digite o numero a ser transformado da base 2 para a base 10: ");
  scanf("%d", &num);

  /* inicializacoes */
  final = 0;
  pot2  = 1;

  printf("%d na base 10 e': ", num);

  while (num != 0){
    final = final + num % 10 * pot2;  /* processa um digito binario */
    num = num / 10;
    pot2 = pot2 * 2;
  }
  printf("%d\n", final);

  return 0;
}
