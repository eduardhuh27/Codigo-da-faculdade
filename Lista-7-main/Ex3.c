#include <stdio.h>

void main()
{
  int i,j, multiplicacao;

  for (i=1;i<=9;i++)
   for(j=0;j<=9;j++)
   {
    multiplicacao=0;
    multiplicacao =i*j;
    printf("\n%d * %d = %d",i , j, multiplicacao);
   }



}