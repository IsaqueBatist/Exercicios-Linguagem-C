#include <stdio.h>
int main()
{
    int num=-2,i,k, primo=0;

    for(i=1;i<=10;i++){

            while(num<0){
                printf("Digite o %i numero positivo inteiro: ", i);
                scanf("%i", &num);
            }


        for(k=1;k<=num;k++){
            if(num%k == 0){
                printf("Divisível por %i\n", k);
                primo++;
            }
        }
        if(primo==2 || num==1){
            printf("%i e numero primo\n", num);
        }else{
            printf("%i NAO e numero primo\n", num);
        }
        primo=0;
        num=-2;
    }




    return 0;
}
