#include <stdio.h>

int main()
{
  int resp;

  printf("De qual estado você é?");
  printf("\n[1] Rio de Janeiro");
  printf("\n[2] Minas Gerais");
  printf("\n[3] São Paulo");
  printf("\n[4] Outros estados\n");
  scanf("%i", &resp);

  switch(resp){
    case 1:
        printf("Carioca");
        break;
    case 2:
        printf("Mineiro");
        break;
    case 3:
        printf("Paulista");
        break;
    case 4:
        printf("");
        break;
    default:
        printf("Estado invalido");
        break;
  }
    return 0;
}

