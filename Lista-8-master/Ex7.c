#include <stdio.h>

int quantDiv (int n, int a, int b);
void main()
{
   int n ,maior, menor;

   printf("Entre com um numero:");
   scanf("%d",&n);

   printf("Entre com o intervalo:");
   scanf("%d %d",&maior, &menor);

   printf("Quantidade de numeros com divisores em comum com %d no intervalo:%d",n,quantDiv(n,maior,menor));

}

int quantDiv (int n, int a, int b)
{
  int i ,j,cont=0 ;

  for (i=a;i<=b;i++)
  {

    for(j=2;j<=n;j++)
    {
      if ((n%j==0) && (i%j==00))
      {
        cont++;
        
        
          break;
        
        
      }
    }

  }
  return cont;
}