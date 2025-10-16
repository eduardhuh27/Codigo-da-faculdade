/// Criar um programa que exiba os N primeiros termos da seguinte série:  1,2,8,64,1024,...
#include <stdio.h>
void main()
{

  int n, i,j=2,x=1;
  
  printf("Entre com o valor de N:");
  scanf("%d",&n);
  
  
  
  for(i=1;i<=n; i++)
  {  
    printf("\n%d", x);
    x =x*j ;
    j = 2*j;
  
  }






}