#include <stdio.h>

int main()
{
  float A, i, Q, R,x; 
   
  
  printf("Entre com os valores de A, Q e R: ");
  scanf("%f",&A);
  scanf("%f",&Q);
  scanf("%f",&R);
 
  for(i=1;i<=A;i++)
  
    for(x=1;x<=12;x++ )
    {
  
    Q = Q+(Q*R);
      printf("\n%.1f",Q);
    }
    
    printf("\nValor na conta de Joaozinho: %.1f",Q);
}
