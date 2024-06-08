#include <stdio.h>
int main(){
    int matriz[4][4];
    int minimax, lin, col, maior, linhaMaiorElemento=0;

    printf("Insira os valores para a matriz 4x4: \n");
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
            printf("Valor para matriz[%i][%i]: ", lin,col);
            scanf("%i", &matriz[lin][col]);
        }
    }
    //definindo a linha onde se encontra o maior elemento da matriz
    maior = matriz[0][0];
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
            if(matriz[lin][col] > maior){
                maior = matriz[lin][col];
                linhaMaiorElemento=lin;
            }
        }
    }
    //definindo o minimax
    minimax = matriz[linhaMaiorElemento][0];
    for(col=0;col<4;col++){
        if(matriz[linhaMaiorElemento][col]<minimax){
            minimax = matriz[linhaMaiorElemento][col];
        }
    }

    printf("Elemento minimax se encontra na linha %i, sendo: %i\n", linhaMaiorElemento, minimax);
}
