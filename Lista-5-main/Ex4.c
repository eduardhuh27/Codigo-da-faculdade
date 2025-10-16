//Implementar um programa que exiba os N primeiros termos de uma PA (Progressão Aritmética) com primeiro termo a1 e razão r.
#include <stdio.h>
void main()
{
  int n, a1, termos=0, termosneg ,i,r;
  
  printf("Entre com o valor de N:");
  scanf("%d",&n);
  
  printf("Entre com o valor da razao:");
  scanf("%d",&r);
  
  printf("Entre com o valor do primeiro termo da PA:");
  scanf("%d",&a1);
    
//  printf("%d",a1);
  
  for(i=1;i<=n; i++)
  {
   /*if( r>0 )
   { 
    if(termos>=a1)
      {
      termos = termos+r;
        printf("\n%d", termos);
      }   
      else
      {
        termos = a1+r;
        printf("\n%d", termos);
      }
   }
   else
    {
     if(termos==0)
      {
         termos = a1 + r;
        printf("\n%d", termos);
      }
      else
      {
       //{ //if(termos!=0)
        //{
          termos = termos + r;
          printf("\n%d", termos);
        //} 
       }
    
    }*/
    printf("\n%d",a1);
    a1+=r;


  } 
}
//}