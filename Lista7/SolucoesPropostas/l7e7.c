/*Escreva um programa para receber o saldo inicial de uma conta bancária de um cliente. A seguir  executar o menu abaixo:

1.  Depósito  e valor a ser depositado
2.  Saque e valor do saque
3.  Ver saldo
4.  Sair

Quando for informado para o menu for código 4, o programa deve ser encerrado e impresso o saldo final da conta com uma das seguintes mensagens:

CONTA ZERADA,
CONTA ESTOURADA (se o saldo for negativo)
CONTA PREFERENCIAL (se o saldo for positivo)*/
#include <stdio.h>

int main()
{
    float valorConta, valorDepositado, valorSacado;
    int opcao;

        printf("Valor inicial na conta bancaria: ");
        scanf("%f", &valorConta);
        printf("\n");


    while(opcao!=4)
    {

        printf("\tOPCOES DISPONIVEIS EM SUA CONTA\n");
        printf("[1] Deposito\n");
        printf("[2] Saque\n");
        printf("[3] Ver saldo\n");
        printf("[4] Sair\n");
        scanf("%i", &opcao);
        while(opcao<1 || opcao>4){
            printf("Opcao invalida. Sua opcao: ");
            scanf("%i", &opcao);
        }

        switch(opcao)
        {
            case 1:
                printf("Valor a ser depositado: ");
                scanf("%f", &valorDepositado);
                valorConta+=valorDepositado;
                printf("\n");
                break;
            case 2:
                printf("Valor a ser sacado: ");
                scanf("%f", &valorSacado);
                valorConta -= valorSacado;
                printf("\n");
                break;
            case 3:
                printf("Seu saldo atual e de: R$%.2f\n", valorConta);
                printf("\n");
                break;
            default:
                break;
        }

    }

    printf("\tSITUACAO DA SUA CONTA\n");
    printf("\n");
    if(valorConta>0){
        printf("CONTA PREFERENCIAL");
    }else if( valorConta <0){
        printf("CONTA ESTOURADA");
    } else {
        printf("CONTA ZERADA");
    }
    printf("\n");

    return 0;
}
