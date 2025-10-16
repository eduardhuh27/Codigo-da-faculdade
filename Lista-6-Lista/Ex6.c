#include <stdio.h>
#include <limits.h>
void main ()
{
  int i ,valor,maiorNumero=INT_MIN, quantidadePar=0;
  float mediaPar=0;
 
  for(i=1;i<=4/*200*/;i++)
  {
    printf("Entre com um numero inteiro: ");
    scanf("%d",&valor);
    if(valor%2==0)
    {
      quantidadePar++;
      mediaPar+=valor;
    }
    if(i%2==0)
    {
      if(valor>=maiorNumero)
      {
        maiorNumero=valor;
      }
    }
  }
  mediaPar=mediaPar/quantidadePar;
  printf("\nMaior numero da sequncia par: %d",maiorNumero);
  printf("\nMedia dos numeros pares: %.1f", mediaPar);


}