#include <stdio.h>
int main()
{
    float media1, media2,media3, somamedia;

    media1 = (8+9+7)/3;
    media2 = (4+5+6)/3;
    somamedia = media1+media2;
    media3= somamedia/2;

    printf("A media entre 8,9 e 7 e: %.2f\n", media1);
    printf("A media entre 4,5 e 6 e: %.2f\n", media2);
    printf("A media entre %.2f e %.2f e:%.2f\n", media1, media2, media3);

}
