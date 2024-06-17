#include <stdio.h>
int main(){
    int matriz[5][5];
    int linha, coluna, somaValores=0;

    for(linha=0;linha<5;linha++){
        for(coluna=0;coluna<5;coluna++){
            printf("Valor para a posicao [%i][%i]: ", linha,coluna);
            scanf("%i", &matriz[linha][coluna]);
            if(linha != coluna){
                somaValores += matriz[linha][coluna];
            }
        }
    }
    printf("Soma de todos os valores da matriz seguindo as restricoes: %i", somaValores);
    return 0;
}
