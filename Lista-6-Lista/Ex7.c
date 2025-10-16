#include <stdio.h>
#include <limits.h>
void main ()
{
  int i, soma=0, menorNum=INT_MAX , valor ;
  float mediaUl=0;
  for(i=1;i<=6/*150*/;i++)
  {
    printf("Entre com um numero inteiro:");
    scanf("%d",&valor);
    if(i<=2/*50*/)
    {
      soma+=valor;

    }else 
    {
      if(i<=4/*100*/)
      {
        if(valor<=menorNum)
        {
          menorNum=valor;
        }
      }
      else
      {
        mediaUl+=valor;
      }
    }
    
  }
 mediaUl=mediaUl/2; //50
 printf("\nSoma dos 50 primeros valores:%d",soma);
 printf("\nMenor numero entre os numeros de posicao 50 e 100:%d", menorNum);
 printf("\nMedia dos ultimos 50 valores:%.1f",mediaUl);



}