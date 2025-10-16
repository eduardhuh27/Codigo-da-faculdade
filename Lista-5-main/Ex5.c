#include <stdio.h>
void main()
{
  int n, i,j=1,sequencia=0;
  
  printf("Entre com o valor de N:");
  scanf("%d",&n);
 
  printf("%d",j);
 
  for(i=1;i<=n;i++)
  {
    if(j==1)
      {
        j=j*2;
        printf("\n%d",j); 
      
      }
      else 
      { 
        if(sequencia <=2)
        {
          sequencia=2;
        } 
        if(sequencia>=2)
        {
        sequencia = sequencia*2;  
        printf("\n%d", sequencia);
        } 
      }
  }
}