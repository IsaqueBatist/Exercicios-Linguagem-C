#include <stdio.h>
int main()
{
    float consumo, consumoMedio, tempo, velocidadeMedia;

    printf("Tempo total da viagem: ");
    scanf("%f", &tempo);

    printf("Velocidade media: ");
    scanf("%f", &velocidadeMedia);

    consumo= velocidadeMedia*tempo;

    printf("Voce perconrreu aproximadamente: %.2fKm", consumo);
    return 0;
}

