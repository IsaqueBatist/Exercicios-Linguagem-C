#include <stdio.h>
int main(){
    int linhaMatriz, colunaMatriz;
    int linha, coluna,  soma, i, j;

    do{
        printf("Tamanho da matriz (ex: 5x5): ");
        scanf("%ix%i", &linhaMatriz, &colunaMatriz);
        if(linhaMatriz<0 || colunaMatriz<0){
            printf("Digite valores POSITIVOS\n");
        }
    }while(linhaMatriz<0 || colunaMatriz<0);

    int matriz[linhaMatriz][colunaMatriz];
    int vetorSoma[colunaMatriz];

    printf("Definindo valores para a matriz: \n");
    for(linha=0;linha<linhaMatriz;linha++){
        for(coluna=0;coluna<colunaMatriz;coluna++){
            printf("Valor para a posicao [%i][%i]: ", linha,coluna);
            scanf("%i", &matriz[linha][coluna]);
        }
    }
    for(i = 0; i < colunaMatriz; i++){
        for(j=0; j<linhaMatriz; j++){
            soma += matriz[j][i];
        }
        vetorSoma[i] = soma;
        soma=0;
    }

    printf("Vetor com a soma de cada coluna, correspondendo ao indice do elemento:\n");
    for(i=0;i<colunaMatriz;i++){
        if(i==0){
            printf("[ %i,", vetorSoma[i]);
        }else if (i==colunaMatriz-1){
            printf("%i ]", vetorSoma[i]);
        }else {
            printf(" %i, ", vetorSoma[i]);
        }
    }
    return 0;
}
