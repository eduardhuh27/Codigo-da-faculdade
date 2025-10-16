#include <stdio.h>
void main()
{
  int i, potencia=1, base, expoente;
  
  printf("Entre com o valor da base:");
  scanf("%d",&base);

  printf("Entre com o valor do expoente:");
  scanf("%d",&expoente);

  for(i=1;i<=expoente;i++)
  {
    potencia *= base;
  }
  printf("Valor da potencia:%d",potencia);




}