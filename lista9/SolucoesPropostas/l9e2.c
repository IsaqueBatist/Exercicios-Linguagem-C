#include <stdio.h>
int main(){
    int matriz[3][5];
    int soma=0, lin, col;

    for(lin=0;lin<3;lin++){
        for(col=0;col<5;col++){
            scanf("%i", &matriz[lin][col]);
            soma+=matriz[lin][col];
        }
    }

    printf("soma: %i\n", soma);



}
