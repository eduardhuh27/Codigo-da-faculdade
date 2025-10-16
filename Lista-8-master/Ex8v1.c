#include <stdio.h>

void primos (int n);

void main()
{
  int n;
  
  printf("Entre com um numero:");
  scanf("%d",&n);
  
  primos(n);
}

void primos (int n)
{
int i,cont,j;

for (i=2;i<=n;i++)
  {
    cont=0;
    for (j=2;j<=i ;j++)
    {
      if(i%j==0)
      {
        cont++;
        if(cont>1)
        {
          break;
        }
      }
    }
    if(cont==1)
    {
      printf("\t%d",i);
    }

  }

}