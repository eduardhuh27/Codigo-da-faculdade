
#include <stdio.h>

void remover (char a[],char g);

void main ()
{
    char a[20]="vogggg";
    char g='g';
    remover(a,g);
    printf("%s",a);
}
void remover (char a[],char g)
{
    int i,j;

    for (i = 0 ;a[i] != '\0'; i++)
    {
        if(a[i] == g)
        {
           for(j = i ;a[j] != 0; j++)
               {
                   a[j] = a[j +1];
               }
            i--;
        }
    }
}
