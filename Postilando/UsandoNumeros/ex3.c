#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    printf("O antecessor de %i e: %i e seu sucessor e: %i", num, num-1, num+1);



    return 0;
}
