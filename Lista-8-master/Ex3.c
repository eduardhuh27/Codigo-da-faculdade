#include <stdio.h>

int sequencia (int n)
{
  int i,a = 0, b = 1, c;

  if (n==1)
  {
    return 1;
  }
  if (n == 0)
  { 
    return 0;
  }
    
    for (i = 2; i <= n; i++)
     {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
  

}

void main ()
{
  int n;

  printf("Entre com numero do termo que deseja:");
  scanf("%d",&n);

  printf("%d",sequencia(n));

}