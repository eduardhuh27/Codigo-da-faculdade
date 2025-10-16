#include <stdio.h>

int strlenC (char s1[]);

void main ()
{
    char s1[20]="Aleatorio";
    printf("%d",strlenC (s1));
}
int strlenC (char s1[])
{
    int i,cont=0;

    for (i=1;s1!=0;i++)
    {

        cont++;
    }
    return cont;


}
