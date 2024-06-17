#include <stdio.h>
int main(){
    int matriz[4][3];
    int linha, coluna;
    int itemSegundoArmazem=0, somaTerceiroArmazem=0, quantidadePrimeiroProduto=0;
    float mediaTerceiroArmazem;

     for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<3;coluna++){
            do{
                printf("Armazem %i, Produto %i: ", linha+1,coluna+1);
                scanf("%i", &matriz[linha][coluna]);
                if(matriz[linha][coluna]<0){
                    printf("Insera um valor POSITIVO!!!\n");
                }
            }while(matriz[linha][coluna]<0);
            if(linha==1){
                itemSegundoArmazem += matriz[linha][coluna];
            }else if(linha==2){
                somaTerceiroArmazem += matriz[linha][coluna];
            }
            if(coluna == 0){
                quantidadePrimeiroProduto += matriz[linha][coluna];
            }
        }
    }
    printf("\tARMAZEM\t\tPRODUTO\n");
    for(linha=0;linha<4;linha++){
        printf("\t  %i", linha+1);
        for(coluna=0;coluna<3;coluna++){
            if(coluna==0){
                printf("\t\t%i, ", matriz[linha][coluna]);
            }else {
                printf("%i, ", matriz[linha][coluna]);

            }
        }
        printf("\n");
    }
    mediaTerceiroArmazem = somaTerceiroArmazem/3;
    printf("Quantidade de itens armazenados no segundo armazem: %i\n", itemSegundoArmazem);
    printf("Media de produtos do terceiro armazem: %.2f\n", mediaTerceiroArmazem);
    printf("Quantidade total do primeiro produto: %i\n", quantidadePrimeiroProduto);

}
