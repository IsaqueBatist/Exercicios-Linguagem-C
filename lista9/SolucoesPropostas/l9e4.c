#include <stdio.h>
int main(){
    int matriz[3][3];
    int matrizDobro[3][3];
    int lin,col;

    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            printf("Valor para matriz[%i][%i]: ", lin,col);
            scanf("%i", &matriz[lin][col]);
            matrizDobro[lin][col] = matriz[lin][col] * 2;
        }
    }

    printf("\t  Matriz Padrao\n");
    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
                printf("\t%i ", matriz[lin][col]);
        }
        printf("\n");
    }

    printf("\t  Matriz Dobro\n");
    for(lin=0;lin<03;lin++){
        for(col=0;col<3;col++){
            printf("\t%i ", matrizDobro[lin][col]);
        }
        printf("\n");
    }

}
