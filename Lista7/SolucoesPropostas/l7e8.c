/*
Escreva um programa que calcule todos os n�meros inteiros divis�veis por um certo valor indicado pelo usu�rio, e compreendidos em um intervalo tamb�m especificado pelo usu�rio.
O usu�rio deve entrar com um primeiro valor correspondente ao divisor e ap�s ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo. Exemplo:

        Digite o valor do divisor: 3
        Digite o in�cio do intervalo: 17
        Digite o final do intervalo: 29

        N�meros divis�veis por 3 no intervalo de 17 a 29: 18 21 24 27
*/

#include <stdio.h>

int main()
{
    int inicioIntervalo, finalIntervalo, i, numero;

    printf("Numero: ");
    scanf("%i", &numero);

    printf("Inicio do Intervalo: ");
    scanf("%i", &inicioIntervalo);

    printf("final do Intervalo: ");
    scanf("%i", &finalIntervalo);

    printf("numeros divisiveis por %i no intervalo de %i a %i: ", numero, inicioIntervalo, finalIntervalo);
    for(i=inicioIntervalo;i<=finalIntervalo;i++){
        if(i%numero==0){
            printf("%i ", i);
        }

    }
    return 0;
}
