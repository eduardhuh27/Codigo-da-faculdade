#include <stdio.h>

void multiplos(int n, int a, int b )
{
  int i, m=1;

  for(i=1;m<b;i++)
  {
    m=n*i;
  
    //if ((m>a) && (m<b))
    if (m>=a)
    {
      printf("\t%d",m);
    }

  }



}

void main()
{

  int n , a, b; 

  printf("Entre com o valor de N:");
  scanf("%d",&n);

  printf("Entre com o valor de A:");
  scanf("%d",&a);

  printf("Entre com o valor de B:");
  scanf("%d",&b);

  multiplos(n,a,b);

}

