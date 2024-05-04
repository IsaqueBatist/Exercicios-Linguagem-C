/*Criar um programa que exibe todos os números ímpares de 0 a 100 utilizando do-while. */
#include <stdio.h>

int main()
{
    int i=0;

    do{
        if(i%2==0 && i!=0){

        }else if(i!=0){
            printf("%i\n", i);
        }
        i++;
    }while(i<=100);

}
