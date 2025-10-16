#include <stdio.h>
 
void main()
{
  int i,n;
printf("Entre com um valor menor ou igual a 18:");
scanf("%d",&n);
 if (n>18)
 {
  printf("\nERRO: valor nao aceito");
 }
 else
 {
  for (i=1;i<=99;i++)
  {
    /*dez=i/10;
    uni=i%10;
    soma= dez + uni*/
    if(i/10 + i%10 == n)
    {
      printf("\n%d", i);
    } 


  }

 }

  
 


}