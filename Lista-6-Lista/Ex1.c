#include <stdio.h>
void main()
{
 int i,n,x,multiplos;
 
 
  printf("Entre com o valor de x :");
  scanf("%d", &x);
  
  for(i=1;i<=5/*50*/;i++)
  {
    printf("Entre com um numero inteiro:");
    scanf("%d",&n);
    
    if(n%x==0)
   { 
    multiplos++;
  
    }
  }
  printf("Quantidade de multiplos: %d",multiplos);







}