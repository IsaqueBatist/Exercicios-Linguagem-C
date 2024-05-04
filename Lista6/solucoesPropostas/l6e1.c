#include <stdio.h>

int main()
{
    int i,j, k,altura;

    printf("Altura: ");
    scanf("%i", &altura);

    for (i=1;i<=altura;i++)
    {
        if(i==1){
                if(altura>9 && altura<17){
                    printf("\t\t*\n");
                } else if(altura>17){
                    printf("\t\t\t*\n");
                } else {
                    printf("\t*\n");

                }
        }else{
            if(altura>9 && altura < 17){
                printf("\t\t");
            } else if (altura>17){
                printf("\t\t\t");
            } else {
                printf("\t");
            }

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
        if(altura>9&& altura<17){
             printf("\t\t*\n");
        } else if(altura>17){
            printf("\t\t\t*\n");
        } else {
            printf("\t*\n");
        }

    }



    return 0;
}
