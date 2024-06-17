#include <stdio.h>
int main(){
    int matriz[3][3];
    int linha, coluna;
    int somaPares=0, somaGeral=0, contadorImpar=0, contadorElemento=0;
    float media;

    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){

            printf("Valor para a posicao [%i][%i]: ", linha,coluna);
            scanf("%i", &matriz[linha][coluna]);

            if(matriz[linha][coluna]%2 == 0){
                somaPares+=matriz[linha][coluna];
            }else if (matriz[linha][coluna] != 0){
                contadorImpar++;
            }

            somaGeral+=matriz[linha][coluna];
            contadorElemento++;
        }
    }
    media = somaGeral/contadorElemento;
    printf("Soma dos elementos pares: %i\n", somaPares);
    printf("Media de todos os elementos da matriz %.2f\n", media);
    printf("Quantidade de elementos impares: %i\n", contadorImpar);








}
