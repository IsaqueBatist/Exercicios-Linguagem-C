#include <stdio.h>
#include <stdbool.h>
int main(){
    int matriz[4][5];
    int linha, coluna;
    int numero;
    bool encontado = false;

     for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<5;coluna++){
            printf("Valor para a posicao [%i][%i]: ", linha,coluna);
            scanf("%i", &matriz[linha][coluna]);
        }
    }
    printf("Matriz Lida:\n");
    for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<5;coluna++){
            printf(" %i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("Valor a ser procurado: ");
    scanf("%i", &numero);
    for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<5;coluna++){
           if(matriz[linha][coluna] == numero){
               encontado = true;
               printf("[%i][%i] ", linha,coluna);
           }
        }
    }

    if(encontado){
        printf("\nENCONTRADO\n");
    }else{
        printf("\nNAO ENCONTRADO\n");
    }
}
