#include <stdio.h>
int main(){
    int matriz[7][7];
    int linha, coluna;

    for(linha=0;linha<7;linha++){
        for(coluna=0;coluna<7;coluna++){
            printf("Valor para a posicao [%i][%i]: ", linha,coluna);
            scanf("%i", &matriz[linha][coluna]);
        }
    }
    printf("Matriz transposta:\n");
    for(coluna=0;coluna<7;coluna++){
        for(linha=0;linha<7;linha++){
            printf(" %i ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

