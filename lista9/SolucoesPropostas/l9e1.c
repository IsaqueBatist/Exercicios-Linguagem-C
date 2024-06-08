#include <stdio.h>
int main(){
    int matriz[4][3];
    int lin, col;

    for(lin=0;lin<4;lin++){
        for(col=0;col<3;col++){
            scanf("%i", &matriz[lin][col]);
        }
    }

    for(lin=0;lin<4;lin++){
        for(col=0;col<3;col++){
            printf("%i ", matriz[col][col]);
        }
        printf("\n");
    }
}
