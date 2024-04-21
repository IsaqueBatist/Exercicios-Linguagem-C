#include <stdio.h>

int main()
{
    int i,j, k,altura;

    printf("Altura: ");
    scanf("%i", &altura);

    for (i=1;i<=altura;i++)
    {
        if(i==1){
            printf("\t*\n");
        }else {
            printf("\t");
            for(j= -i+2;j<=i;j++)
            {
                if(j == -i+2)
                {
                    for(k=2;k<=i;k++)
                    {
                        printf("\b");
                    }
                }else
                {
                    printf("*");
                }

            }
            printf("*");
            printf("\n");
        }
    }
    for(k=0;k<altura; k++)
    {
        printf("\t*\n");
    }



    return 0;
}
