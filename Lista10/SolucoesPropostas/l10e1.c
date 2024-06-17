#include <stdio.h>
int main(){
    int matriz1[4][4];
    int matriz2[4][4];
    int matrizMaiores[4][4];
    int lin, col;

    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
            printf("Valor para a posicao [%i][%i] da 1a matriz: ", lin,col);
            scanf("%i", &matriz1[lin][col]);
        }
    }
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
            printf("Valor para a posicao [%i][%i] da 2a matriz: ", lin,col);
            scanf("%i", &matriz2[lin][col]);
        }
    }
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
           if(matriz1[lin][col] > matriz2[lin][col]){
                matrizMaiores[lin][col] = matriz1[lin][col];
           }else{
                matrizMaiores[lin][col] = matriz2[lin][col];
           }
        }
    }
    printf("Matriz com os maiores valores por posicao: \n");
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
            printf(" %i ", matrizMaiores[lin][col]);
        }
        printf("\n");
    }
    return 0;
}
