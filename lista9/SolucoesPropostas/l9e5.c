#include <stdio.h>
int main(){
    int matriz[4][4];
    int i,j;

    printf("Insira os valores para a matriz 4x4: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Valor para matriz[%i][%i]: ", i,j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("Diagonal Principal: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                printf("%i ", matriz[i][j]);
            }

        }

    }

}
