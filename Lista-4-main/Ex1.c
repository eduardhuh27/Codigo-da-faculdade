#include <stdio.h>
void main()
{
  int n, i;
  
  printf("Entre com o valor de N:");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
    if ((i%2==0) && (i<=n))
    {
      printf("\n%d",i);
      
    } 
  
  }

}
