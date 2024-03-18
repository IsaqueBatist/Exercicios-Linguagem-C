#include <stdio.h>
/*4. Receber uma temperatura em Fahrenheits e convertê-la para Celsius. 
   Celsius = (Fahrenheit - 32) / 1.8. */
int main()
{
  	float tf, tc; //tf = temperatura Fahrenheits e tc= temperatura celsius
	printf("Qual temperatura em F deseja converter para C? ");
	scanf("%f", &tf);
	tc = (tf-32)/1.8;
	printf("\n%.2f F equivalem a %.2f C", tf,tc);
  
  
  
  
  
}

