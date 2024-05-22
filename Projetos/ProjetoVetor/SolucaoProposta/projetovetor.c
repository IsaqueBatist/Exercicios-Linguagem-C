#include <stdio.h>
/*
Criar dois vetores inteiros de 10 elementos.

    Receber e armazenar no vetor1 somente valores positivos enquanto o usuário desejar, limitado a 10 valores.
    Receber e armazenar no vetor2somente valores positivos enquanto o usuário desejar, limitado a 10 valores.

    O usuário poderá digitar de 0 a 10 valores para cada vetor.
    Dessa forma o vetor 1 poderá guardar mais ou menos valores comparado com o vetor 2.
    Em ambos os vetores,  no máximo 10 valores poderão ser armazenados e no mínimo 0.
    Observe que o tamanho do vetor sempre será 10, independente da quantidade de valores armazenados.

    Verificar a quantidade de valores iguais, na mesma posição, em ambos os vetores.
    Mostrar essa quantidade:

    Exemplo 1:
    Vetor1:  [1, 3, 6, 7, 8, 8, 12, 54, 23, 8]
    Vetor2:  [1, 3, 6, 5, 8, 8,   1, 53, 23, 8]
    Imprimir: 7


    Exemplo 2:
    Vetor1:  [1, 3, 2]
    Vetor2:  [1, 3, 6, 5, 8, 8,   1, 53, 23, 8]
    Imprimir: 2
*/

int main()
{
    int vetor1[10];
    int vetor2[10];
    int num, contador=0, i;

    printf("\tPara parar de digitar valores no vetor, digite 0\n");

    for(i=0; i<10; i++){
        printf("\nValor para a posicao %i do vetor1: ", i);
        scanf("%i", &num);

        if(num==0){
            break;
        } else {
            vetor1[i] = num;
        }
    }
    for(i=0; i<10; i++){
        printf("\nValor para a posicao %i do vetor2: ", i);
        scanf("%i", &num);

        if(num==0){
            break;
        } else {
            vetor2[i] = num;
        }
    }

    for(i=0;i<10;i++){
        if(vetor1[i] == vetor2[i]){
            contador++;
        }
    }

    printf("\nQuantidade de valores iguais nos vetores: %i\n",  contador);



    return 0;
}
