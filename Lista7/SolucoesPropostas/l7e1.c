\/*Criar um programa que exibe todos os números pares de 0 a 100 utilizando while. */
#include <Stdio.h>

int main()
{
    int i;

    for(i=0;i<=100;i++){
        if(i%2==0 && i!=0){
            printf("%i\n", i);
        }
    }
}
