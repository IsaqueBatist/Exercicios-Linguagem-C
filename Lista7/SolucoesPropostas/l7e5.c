/*Receber n�meros enquanto o usu�rio quiser digit�-los (a cada n�mero informado pe�a que o usu�rio digite 1 se quiser informar mais um n�mero ou 2 se quiser parar).
No final, exibir:  o maior n�mero;  a m�dia aritm�tica dos n�meros. */

#include <stdio.h>

int main()
{
    int i, maior, media, soma=0, contador=0, controle, num;
    printf("\tDigite 1 para continuar e 2 para Parar\n");

    printf("Digite um numero: ");
    scanf("%i", &num);
    soma+= num;
    contador++;
    maior= num;

    do{
        printf("Digite um numero: ");
        scanf("%i", &num);
        if(num > maior){
            maior= num;
        }
        soma+= num;
        contador++;
        printf("Deseja continuar? [1/2]");
        scanf("%i", &controle);
        while(controle<1 || controle>2)
        {
            printf("Valor invalido, digte novamente: ");
            scanf("%i", &controle);
        }
    }while(controle!=2);

    media= soma/contador;

    printf("O maior numero e: %i\n ", maior);
    printf("A media entre os numeros e: %i", media);


    return 0;
}
