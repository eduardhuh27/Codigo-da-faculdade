#include <stdio.h>
void main()
{
  int i, n, valor, valormaior=0, valormenor=1000000;
  
  printf ("Entre com a quantidade de numeros desejada:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {   
    printf("Entre com um  numero:");
    scanf("%d",&valor);

    if(valor<=valormenor)
     {
        valormenor=valor;
      }
    if (valor>=valormaior)
      {
       valormaior=valor;
      }

  }
  printf("\nMenor valor fornecido: %d",valormenor);
  printf("\nMaior valor fornecido: %d", valormaior);


}