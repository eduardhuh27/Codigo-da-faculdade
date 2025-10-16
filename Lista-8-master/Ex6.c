#include <stdio.h>

void seq (int n)
{
  int i,j;

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)

    if(j!=i)
    {
      printf("(%d,%d)",i,j);
    }
  }
}

void main ()
{
  int n;
  
  printf("Entre com o valor de n:");
  scanf("%d",&n);

  seq(n);
}