#include <stdio.h>

int mdc (int x, int y)
{

  int i,menor;

  if (x<y)
  {
    menor=x;
  }
  else
  {
    menor=y;
  }
  
  for(i=menor;i>=1;i--)
  {

    if((x%i==0) &&(y%i==0))
    {
      return i; 
    }

  }

 
}


void main ()
{
  int x,y;

  printf("Entre com o primeiro numero:");
  scanf("%d",&x);

  printf("Entre com o segundo numero:");
  scanf("%d",&y);

  printf("%d",mdc(x,y));


}