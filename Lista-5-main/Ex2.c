//Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.
#include <stdio.h>
void main ()
{
int i,n,soma=0;
 printf("Entre com o valor de N:");
 scanf("%d",&n);

 for (i=1;i<=n;i++) 
 {
  soma = i+soma;
 }
 printf("%d", soma);
}