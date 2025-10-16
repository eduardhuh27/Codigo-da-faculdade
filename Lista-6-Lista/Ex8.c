#include <stdio.h>

void main()
{
  int y, i, quantidade=0 ;
  float x, valor;

  printf("Entre com um valor para X:");
  scanf("%f",&x);

  printf("Entre com um valor para Y:");
  scanf("%d",&y);
  

  for(i=1;i<=5/*100*/;i++)
  {

    printf("Entre com um numero real:");
    scanf("%f",&valor);

   if ((valor>=x-y) && (valor<=x+y) )
    {
      printf("%.1f Esta presente no intervalo\n",valor);
      quantidade++;
    }
  }
  if(quantidade==0)
    {
      printf("Nenhum valor no intervalo (x-y) e (x+y)");
    }
  else
    {
      printf("Quantidade de valores entre (x-y) e (x+y): %d",quantidade);
    }
}