#include <stdio.h>

int main()
{
    int tamanho, i, j, k,l;

    printf("Tamanho do Quadrado: ");
    scanf("%i", &tamanho);

    for(i=0; i<=tamanho;i++) //tam ==3 xxxxxx\nX    X\n
    {
        if(i==0 || i==tamanho)
        {
            for (j=0;j<tamanho;j++)
            {
                printf("XX");
            }
            printf("\n");
        } else if (i==1){
                for(k=0; k<=tamanho;k++)
                {
                    for(l=0; l<=tamanho; l++)
                        {
                            if(l==0 || l==tamanho){
                              printf("X");
                            } else {
                                printf("  ");
                            }
                        }
                     printf("\n");

                }
            }
    }
     return 0;
    }



