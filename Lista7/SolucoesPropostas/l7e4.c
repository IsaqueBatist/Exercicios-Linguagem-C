/*Criar um programa de calculadora que vai realizando os cálculos entre dois números enquanto o usuário desejar.
Criar um menu de opções conforme mostrado a seguir:
1 – Soma
2 – Subtração
3 – Multiplicação
4 – Divisão
5 – Sair*/
#include <stdio.h>

int main()
{
    int escolha=0;
    float num1,num2, valor;
    while(escolha!=5)
    {
        printf("\n\tCALCULADORA\n");
        printf("\t[1]Soma\n");
        printf("\t[2]Subtracao\n");
        printf("\t[3]Multiplicacao\n");
        printf("\t[4]Divisao\n");
        printf("\t[5]Sair\n");
        printf("Sua esoclha: ");
        scanf("%i", &escolha);
        if(escolha==5){
            break;
        }

        printf("\nPrimeiro Numero: ");
        scanf("%f", &num1);

        printf("\nSegundo Numero: ");
        scanf("%f", &num2);



        while(escolha<1 || escolha>5)
        {
         printf("Escolha invalida!!!\n Escolha novamente: ");
         scanf("%i", &escolha);
        }

        switch(escolha)
        {
            case 1:
                valor = num1+num2;
                printf("%.2f + %.2f = %.2f", num1,num2,valor);
                break;
            case 2:
                valor= num1-num2;
                 printf("%.2f - %.2f = %.2f", num1,num2,valor);
                break;
            case 3:
                valor= num1*num2;
                 printf("%.2f * %.2f = %.2f", num1,num2,valor);
                break;
            case 4:
                valor=num1/num2;
                printf("%.2f // %.2f = %.2f", num1,num2,valor);
                break;
        }
    }

    return 0;
}
