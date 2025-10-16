#include <stdio.h>
#include <limits.h>

void main()
{
  int i,m,anos=0 ; 
  float c;

  printf("Entre com a taca de crescimento anual(C%):");
  scanf("%f",&c);
  
  printf("Entre com o M em unidade de producao:");
  scanf("%d", &m);
  
  i=m;
  while (i<=2*m)
  {
    i+=i*(c/100);
    anos++;
  }
  printf("Quantidade de anos que levou para a producao dobrar:%d",anos);



}