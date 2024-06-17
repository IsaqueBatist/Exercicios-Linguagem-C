#include <stdio.h>

int main(){
    int v[10], vI[10];
    int i, j, temporario, numero, inicio = 0, fin = 9, polindromo=1;

    for(i=0;i<10;i++){
        v[i] = 0;
    }
    i=9;

    printf("Digite um numero para saber se ele e palindromo: ");
    scanf("%i", &numero);

    temporario = numero;
    while(temporario > 0 && i >=0){
        v[i] = temporario % 10;
        temporario /= 10;
        i--;
    }

    for(i=0;i<10;i++){
        if(v[i] != 0){
            break;
        }else{
            inicio++;
        }
    }

    while(inicio<fin){
        if(v[inicio] != v[fin]){
            polindromo = 0;
        }
        inicio++;
        fin--;
    }
    printf("[ ");
    for(i=0;i<10;i++){
        if(i==9){
            if(polindromo == 1){
                printf("%i ] = SIM\n", v[i]);
            }else {
                printf("%i ] = NAO\n", v[i]);
            }
        }else {
            printf("%i, ", v[i]);
        }
    }


    return 0;
}
