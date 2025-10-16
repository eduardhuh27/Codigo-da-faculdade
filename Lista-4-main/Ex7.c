#include <stdio.h>
void main()
{
int n, i,par=0, impar=1, valor ;
  
printf("Entre com a quantidade de numeros desejados:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  printf("Entre com um numero inteiro positivo:");
  scanf("%d",&valor);
  
  if(valor%2==0)
  {
    par+=valor;
  }
  else 
  {
    impar=impar*valor;
  }
}
 if(impar==1)
 {
  printf("\nSem valores impares nos valores inseridos");
 }
 else
 {
  printf("\nMultiplicacao dos valores impares: %d", impar);
 }
  printf("\nSoma dos valores pares: %d", par); 
}