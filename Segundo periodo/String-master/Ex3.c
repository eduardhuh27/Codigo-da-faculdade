#include <stdio.h>
#include <strings.h>

void sub (char s[] ,int p,int n);

void main ()
{
    char s[15]={"paralelo"};
    int p=4;
    int n=4;
    sub (s,p,n);
}
void sub (char s[], int p, int n)
{
    char s2[n];
    int i;
   
    for (i=0;i<=strlen(s)-n;i++,p++)
    {
        s2[i]=s[p];
    }
    printf("%s",s2);
}