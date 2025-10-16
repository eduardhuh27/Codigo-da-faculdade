#include <stdio.h>
void main()
{
 int i, s=0, x , y=0;
 
 for (i=1,x=50 ;i<=50;i++, x-- )
 {
   
   printf("\n valor de i: %d", i );
  
   s = s + i + x;
   printf("\n valor de x: %d", x );
   //printf("\n valor de s %d", s );
 }
 
 //printf("\n valor de x: %d", x );
  printf ("\nValor da soma total %d", s);
 
}