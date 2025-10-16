#include <stdio.h>
void main()
{
  float media, valor, soma;
  int i, vp=0 ,vn=0 ; 
  for(i=1;i<=300; i++)
    {
      printf ("Entre com um valor:");
      scanf("%f", &valor);
      if(valor<0)
      { 
       vn++;
      }
      else{
        if (valor>0)
        {
         vp++;
         soma+= valor;
        }
      }
  }
  media = soma/vp;
 if (vp>0)
  {  
    printf("\nMedia dos valores positivos: %.1f",media);
  }
 else
  {
   printf("\nMedia =0");
  }
 
 printf("\nQuantidade de valores negativos: %d", vn);


}