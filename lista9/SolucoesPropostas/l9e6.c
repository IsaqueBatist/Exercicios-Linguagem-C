#include <stdio.h>
int main(){
    int matriz[3][4];
    int linhaEscolhida, soma, lin, col;

    printf("Insira os valores para a mtriz 3x4: \n");
    for(lin=0;lin<3;lin++){
        for(col=0;col<4;col++){
            printf("Valor para matriz[%i][%i]: ", lin,col);
            scanf("%i", &matriz[lin][col]);
        }
    }

    do{
        printf("Escolha uma linha da matriz 3x4 para a soma de seus elementos: ");
        scanf("%i", &linhaEscolhida);
        if(linhaEscolhida<0 || linhaEscolhida>2){
            printf("Erro, tente novamente!!!\n");
        }
    }while(linhaEscolhida<0 || linhaEscolhida>2);

    printf("Soma dos valores da linha %i: \n", linhaEscolhida);
    for(col=0;col<4;col++){
        if(col==3){
            printf("%i ", matriz[linhaEscolhida][col]);
        }else {
            printf("%i + ", matriz[linhaEscolhida][col]);
            soma+=matriz[linhaEscolhida][col];
        }
    }
    printf("= %i", soma);
}
