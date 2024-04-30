#include <stdio.h>
#include <string.h>

int main()
{
    char mensagem[100];
    int numA=0,numE=0,numI=0,numO=0,numU=0, i;

    printf("Digite uma mensagem: ");
    fgets(mensagem, 100, stdin);
    for(i=0;i<strlen(mensagem);i++){
        if(mensagem[i] == 'A' || mensagem[i] == 'a'){
            numA++;
        }else if (mensagem[i] == 'E' || mensagem[i] == 'e'){
            numE++;
        }else if(mensagem[i] == 'I' || mensagem[i] == 'i'){
            numI++;
        }else if(mensagem[i] == 'O' || mensagem[i] == 'o'){
            numO++;
        }else if(mensagem[i] == 'U' || mensagem[i] == 'u'){
            numU++;
        } else {
            continue;
        }
    }

    printf("Na frase digitada temos:\n%i A\n%i E\n%i I\n%i O\n%i U", numA,numE,numI,numO,numU);



    return 0;
}
