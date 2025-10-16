#include <stdio.h>
void main()
{
  int i, n, valor,soma=0 ;
  float mediaPonderada, peso,pesoSo=0;

  printf("Entre com a quantidade de valores:");
  scanf("%d",&n);


  for(i=1;i<=n;i++)
  {
    printf("Entre com o valor:");
    scanf("%d",&valor);

    printf("Entre com o peso do valor:");
    scanf("%f",&peso);
    pesoSo+=peso;
    soma+=(peso*valor);

  }
  mediaPonderada=(float)soma/pesoSo;

  printf("Media ponderada: %.1f",mediaPonderada);



}