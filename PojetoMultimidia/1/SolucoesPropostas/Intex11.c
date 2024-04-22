#include <stdio.h>

int main()
{
    int num, i, cont=0;

    printf("Digite um numero: ");
    scanf("%i", &num);
    fflush(stdin);

    for(i=1;i<=num;i++)
    {
        if(num%i==0){
            cont++;
        } else {
            continue;
        }
    }
    if(cont==2)
    {
        printf("%i e primo", num);
    } else {
        printf("%i nao e primo", num);
    }


    return 0;
}
