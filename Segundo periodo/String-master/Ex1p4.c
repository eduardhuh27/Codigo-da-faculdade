#include <stdio.h>
#include <string.h>
int strcomparar (char s1[],char s2[]);

void main ()
{
    int certo,erro;
    char s1[10]= "aleatorio";
    char s2[10]="aleatorio";
    char s3[10]="alexandre";

    certo=strcomparar(s1,s2);
    erro=strcomparar(s1,s3);
    if(certo==0)
    {
        printf("Sao iguais\n");
    }
    else
    {
        printf("Nao sao iguais");
        if(certo>0)
        {
            printf("\tA primeira string é de maior ordem\n.");
        }
        else
        {
            printf("\tA segunda string é de maior ordem\n.");
        }
    }
    if (erro==0)
    {
        printf("Sao iguais\n");
    }
    else
    {
        printf("Nao sao iguais\n");
        if(erro>0)
        {
            printf("\tA primeira string é de maior ordem.");
        }
        else
        {
            printf("\tA segunda string é de maior ordem.");
        }
    }



}

int strcomparar (char s1[],char s2[])
{
    int i,j;

    for(i=0,j=0;s1[i]==s2[j];i++,j++)
    {
       if(i==strlen(s1))
       {
         return 0;
       }
    }
    return s1[i]-s2[j];

}