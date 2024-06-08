#include <stdio.h>
int main(){
    int matriz[5][3];
    int i,j, maior, lin, col;


    for(lin=0;lin<5;lin++){
        for(col=0;col<3;col++){
            printf("Valor para matriz[%i][%i]: ", lin,col);
            scanf("%i", &matriz[lin][col]);
            if(i==0 && j==0){
                maior = matriz[lin][col];
                i = lin;
                j = col;
            }else if(matriz[lin][col] > maior){
                maior = matriz[lin][col];
                i = lin;
                j = col;
            }
        }
    }
    printf("Maior: matriz[%i][%i] = %i", i, j, maior);

}
