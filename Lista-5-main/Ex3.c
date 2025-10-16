//Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário.
#include <stdio.h>
void main()
{
  int i,n,divisores=0;
  printf("Entre com o valor de N:");
  scanf("%d",&n);
 
  for (i=1;i<=n;i++) 
  {
   if(n%i==0)
   { 
    printf("%d ",i);
 
   } 
  }

}