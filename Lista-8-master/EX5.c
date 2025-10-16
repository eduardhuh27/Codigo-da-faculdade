#include <stdio.h>


int calcular_mmc(int x, int y);
int maximo (int x,int y);

void main()
{
  int x,y;

  printf("Entre com o valor de x:");
  scanf("%d",&x);

  printf("Entre com  o valor de y:");
  scanf("%d",&y);

  printf("%d", calcular_mmc(x,y));
}

int maximo(int x , int y)
{
  

  if(x>y)
  {
    return x;
  }
  else
  {
    return y;
  } 
}
int calcular_mmc(int x, int y) 
{
    int i,j,divx,divy, mmc;
    for(i=maximo(x,y);i<=y*x;i++)
    
    {
        if((i%x==0) && (i%y==0))
        {
          return i;
        }
      
    }

   

  }
