/*A prefeitura de Itu est� em elei��es. Apresentaram-se 3 candidatos: JOS� com o n� 1, MARIA com o n� 2 e JO�O com o n� 3.
Cada eleitor deve indicar a sua op��o, que pode ser o n� de um candidato (1,2,3), voto branco (n� 4) ou voto nulo (n� 5).
Preparar um programa que receba e processe os dados de um n�mero n�o determinado de c�dulas at� que seja digitado 0 para o voto, escrevendo os seguintes dados:
a) o n�mero de votos de cada uma das 5 op��es;
b) o nome do candidato vencedor;
c) o percentual de eleitores que elegeram o candidato vencedor.*/
#include <stdio.h>

int main()
{
    int jose=0,maria=0,joao=0, branco=0, nulo=0,opcao=1, maior=0, totalEleitores=0;
    float porcentual;
    while(opcao!=0)
    {

        printf("\tELEICOES ITU");
        printf("\tSeu voto:\n");
        printf("[1] Jose\n");
        printf("[2] Maria\n");
        printf("[3] Joao\n");
        printf("[4] Branco\n");
        printf("[5] Nulo\n");
        printf("[0] Parar contagem de votos\n");
        scanf("%i", &opcao);

        switch(opcao){
            case 1:
                jose++;
                totalEleitores++;
                break;
            case 2:
                maria++;
                totalEleitores++;
                break;
            case 3:
                joao++;
                totalEleitores++;
                break;
            case 4:
                branco++;
                totalEleitores++;
                break;
            case 5:
                nulo++;
                totalEleitores++;
                break;
        }
    }
      if(joao> maria && joao>jose){
            joao+=branco;
            maior = joao;
            printf("\n!O vencedor das eleicoes foi o Joao!\n");
        } else if(maria>joao && maria>jose){
            maria+= branco;
            maior = maria;
            printf("\n!O vencedor das eleicoes foi a Maria!\n");
        } else if(jose>joao && jose>maria){
            jose += branco;
            maior = jose;
            printf("\n!O vencedor das eleicoes foi o Jose!\n");
        }

    porcentual= maior*100/totalEleitores;
    printf("\nTotal de votos em Jose: %i\n", jose);
    printf("Total de votos em Maria: %i\n", maria);
    printf("Total de votos em Joao: %i\n", joao);
    printf("Total de votos em Branco: %i\n", branco);
    printf("Total de votos Nulo: %i\n", nulo);

    printf("O porcetual de eleitores que elegeram o vencedor foi: %.2f%%", porcentual);


    return 0;
}
