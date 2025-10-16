#include <stdio.h>
#include <string.h>

int compaux (char a[],int i);
int comparar (char a[]);

void main ()
{
    char a[20]="paralelo";
    
    printf("%d",comparar(a));
}

int comparar (char a[])
{
    int i=0,j,cont=0;

  while(i<strlen(a))
  {
    for(j=0;j<i;j++)
      {
          if(a[i]==a[j])
          {
              cont--;
              break;
          }
      }
      cont++;
      i++;
  }
    return cont;
}

