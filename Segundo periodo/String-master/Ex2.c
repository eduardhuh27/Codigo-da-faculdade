#include <stdio.h>
#include <string.h>

int palio (char str[],int tamanho);
//int palior (char str[],int tamanho,int i);

void main ()
{
    int i,j;
    char str[6]={"andre"};
    char str2[6]={"ana"};
    
    i= palior(str2,strlen(str2),0);
    j= palior(str,6,0);
   
    if(i==1)
    {
        printf("E um palindromo");
    }
    if (j==0)
    {
        printf("Nao e um palindromo");
    }
}

int palio (char str[],int tamanho)
{   
    int i;

    for ( i=0; i <tamanho ; i++,tamanho--)
    {
        if(str[i] != str[tamanho-1])
        {
            return 0;
        }
    }
    return 1;
}

/*int palior (char str [],int tamanho, int i)
{
   if (i<=strlen(str))
   {
       if(str[i]==str[tamanho-1])
        {
            palior (str,tamanho-1,i+1);
        }
        else
        {
             return 0;
        }
        
   }
 return 1;

}*/