/*Criar um programa que exibe todos os n�meros �mpares de 0 a 100 utilizando do-while. */
#include <stdio.h>

int main()
{
    int i=1;

    do{
        printf("%i\n", i);
        i+=2;
    }while(i<100);

}
