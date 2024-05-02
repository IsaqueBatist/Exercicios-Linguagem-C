 /*  Dizemos que um n�mero natural n � pal�ndromo (3) se
    o 1� algarismo de n � igual ao seu �ltimo algarismo,
    o 2� algarismo de n � igual ao pen�ltimo algarismo,
    e assim sucessivamente.*/

    #include <stdio.h>
int main() {
  int num,        /* numero dado                                  */
      aux,        /* guarda o pedaco do numero que resta inverter */
      reverso;    /* guarda o numero de tras para frente          */

  printf("Digite um natural: ");
  scanf("%d", &num);

  /* inicializacoes */
  aux = num; // 567765
  reverso = 0;

  while (aux != 0) {
    reverso =  reverso * 10 + aux % 10;  //5 56
    aux =  aux / 10; //56776 5677
  }

  if (reverso == num)
    printf("%d e' palindrome\n", num);
  else
    printf("%d nao e' palindrome\n", num);

  return 0;
}
