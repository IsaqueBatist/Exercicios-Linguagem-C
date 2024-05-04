/*Receber números enquanto o usuário quiser digitá-los (a cada número informado peça que o usuário digite 1 se quiser informar mais um número ou 2 se quiser parar).
No final, exibir:  o maior número;  a média aritmética dos números. */

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
