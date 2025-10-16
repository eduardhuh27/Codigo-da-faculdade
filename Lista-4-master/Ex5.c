#include <stdio.h>
 
void main()
{
int i;
for(i=1;i<=50;i++)
 {
  if(i%2==0)
  {
    printf("\n%d",i*(-1));  
  }
  else{
  printf("\n%d",i );  
 }
}
}