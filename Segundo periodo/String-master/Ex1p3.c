#include <stdio.h>
#include <string.h>

int strcopy (char s1[],char s2[]);

void main ()
{
    char s1[20]="aleatorio";
    char s2[8]= "copiar";
    if(strcopy(s1,s2)==1)
    {
    printf("Copiado com sucesso.");
    }
    else
    {
        printf("Nao foi copiado.");
    }
}
int strcopy (char s1[],char s2[])
{
    int i,j;

    for (i=0,j=0;s2[i]!=0,s1[j]!=0;i++,j++)
    {
        s1[j]=s2[i];
       
    }
    printf("%s\n",s1);

     return 1;
}