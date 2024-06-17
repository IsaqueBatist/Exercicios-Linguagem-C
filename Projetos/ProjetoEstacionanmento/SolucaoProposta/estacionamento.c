#include <stdio.h>

int main(){
    int estacionamento[10][10];
    int opcao, linha, coluna;
    int colunaEstacionar, linhaEstacionar, disponibilidade=0, totalVagasLivres=0, vagaRecomendada, numeroDeCarros=1, maiorNumeroDeCarros=1, hrsEstacionado;
    float totalDia=0, totalArrecadado=0;
    char cl;
    printf("\tBEM VINDO AO ESTACIONAMETO 'pixncola?' valor/h: R$7,00\n");

    for(linha=0;linha<10;linha++){
        for(coluna=0;coluna<10;coluna++){
            estacionamento[linha][coluna] = 0;
        }
    }
    do{
            do{
                printf("[1]Estacionar\n");
                printf("[2]Sair\n");
                printf("[3]Exibir vagas\n");
                printf("[4]Total arrecada ate o momento\n");
                printf("[5]Começar um novo dia\n");
                printf("[6]Finalizar o Sistema\n");
                scanf("%i", &opcao);
                if(opcao<1 || opcao  >6){
                    printf("\tOPCAO INVALIDA, tente novamente: \n");
                }
            }while(opcao<1 || opcao >6);
        switch(opcao){
            case 1:
                printf("Horas que ficara estacionado: ");
                scanf("%i", &hrsEstacionado);
                totalDia += hrsEstacionado*7;
                totalArrecadado += hrsEstacionado*7;
                     for(linha=0;linha<10;linha++){
                        for(coluna=0;coluna<10;coluna++){
                            if(estacionamento[linha][coluna] == 0){
                                switch(linha){
                                    case 0:
                                        cl = 'A';
                                        break;
                                    case 1:
                                        cl = 'B';
                                        break;
                                    case 2:
                                        cl = 'C';
                                        break;
                                    case 3:
                                        cl = 'D';
                                        break;
                                    case 4:
                                        cl = 'E';
                                        break;
                                    case 5:
                                        cl = 'F';
                                        break;
                                    case 6:
                                        cl = 'G';
                                        break;
                                    case 7:
                                        cl = 'H';
                                        break;
                                    case 8:
                                        cl = 'I';
                                        break;
                                    case 9:
                                        cl = 'J';
                                        break;
                                    default:
                                        break;
                            }
                            printf("Vaga recomendada: %c %i\n", cl, coluna+1);
                            break;
                        }
                    }
                    if(estacionamento[linha][coluna] == 0){
                        estacionamento[linha][coluna] = 1;
                        break;
                    }
                }
                break;
                case 2:
                    do{
                        printf("Qual vaga deseja Liberar? Vagas: A1- J10 [Digite no formate A 1]\n");
                        scanf(" %c", &cl);
                        scanf("%i", &colunaEstacionar);
                        switch(cl){
                            case 'A':
                                linhaEstacionar = 0;
                                break;
                            case 'B':
                                linhaEstacionar = 1;
                                break;
                            case 'C':
                                linhaEstacionar = 2;
                                break;
                            case 'D':
                                linhaEstacionar = 3;
                                break;
                            case 'E':
                                linhaEstacionar = 4;
                                break;
                            case 'F':
                                linhaEstacionar = 5;
                                break;
                            case 'G':
                                linhaEstacionar = 6;
                                break;
                            case 'H':
                                linhaEstacionar = 7;
                                break;
                            case 'I':
                                linhaEstacionar = 8;
                                break;
                            case 'J':
                                linhaEstacionar = 9;
                                break;
                            default:
                                linhaEstacionar = -1;
                                break;
                        }
                        if(linhaEstacionar == -1){
                            printf("Esta vaga NAO EXISTE no nosso estacinamento, digite um valor valido\n");
                        }
                    }while(linhaEstacionar == -1);
                    if(estacionamento[linhaEstacionar][colunaEstacionar-1] == 1){
                        printf("Carro liberado com sucesso na vaga %c %i\n", cl, colunaEstacionar);
                        estacionamento[linhaEstacionar][colunaEstacionar-1] = 0;
                        totalDia += 15;
                        totalArrecadado += 15;
                    }else{
                        printf("Esta vaga esta livre, sem carros para liberar\n");
                    }
                    break;
                case 3:
                    printf("Vagas dispoiveis: [0-Vazio 1-Libeado]\n");
                        for(linha=0;linha<10;linha++){
                            for(coluna=0;coluna<10;coluna++){
                                printf(" [%i] ", estacionamento[linha][coluna]);
                                if(estacionamento[linha][coluna] == 0){
                                    totalVagasLivres++;
                                }
                            }
                            printf("\n");
                        }
                        printf("Total de vagas disponiveis: %i \n", totalVagasLivres);
                        totalVagasLivres = 0;
                break;
                case 4:
                    printf("O total arrecadado ate o momento foi: R$%.2f\n", totalDia);
                    break;
                case 5:
                    printf("\tComecando um novo dia...\n");
                       for(linha=0;linha<10;linha++){
                            for(coluna=0;coluna<10;coluna++){
                                if(estacionamento[linha][coluna] == 1){
                                    numeroDeCarros ++;
                                }
                                if(numeroDeCarros > maiorNumeroDeCarros){
                                    maiorNumeroDeCarros = numeroDeCarros;
                                }
                                estacionamento[linha][coluna] = 0;
                            }
                        }
                        totalDia = 0;
                        numeroDeCarros = 0;
                break;
                case 6:
                 printf("\tComecando um novo dia...\n");
                 for(linha=0;linha<10;linha++){
                    for(coluna=0;coluna<10;coluna++){
                        if(estacionamento[linha][coluna] == 1){
                            numeroDeCarros ++;
                        }
                        if(numeroDeCarros > maiorNumeroDeCarros){
                            maiorNumeroDeCarros = numeroDeCarros;
                        }
                        estacionamento[linha][coluna] = 0;
                    }
                 }
                numeroDeCarros = 0;
                printf("\tFim do Sistema...\n");
                printf("Total arrecadado: R$%.2f\n", totalArrecadado);
                printf("Quantidade de carros estacionado ao mesmo tempo: %i\n", maiorNumeroDeCarros);
                break;
        }
    }while(opcao != 6);
    return 0;
}
