#include <stdio.h>
#include <string.h>

int busca(char s2[],char atual);
void criar(char s1[], char s2[],char s3[]);

void main ()
{
    char s1[]="algas";
    char s2[]="al";
    char s3[5];
    criar(s1,s2,s3);
    printf("%s",s3);
}

void criar(char s1[], char s2[],char s3[])
{
    int acho,acho2,i,k=0;
    char atual;
     for (i=0; i<strlen(s1); i++)
    {   
        atual=s1[i]; 
        
            acho=busca(s2,atual);
            acho2=busca(s3,atual);
            
        if(acho2==0 && acho==0)
        {
            s3[k]=atual;
             k++;
            s3[k]=0;
        }   
        
        
    }
}
int busca (char s2[],char atual)
{
    int j;
        for(j=0;j<strlen(s2);j++)
        {
            if(s2[j]==atual)
            {
                return 1;
            }
        }
    
    return 0;
}
