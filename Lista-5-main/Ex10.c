#include <stdio.h>
void main()
{
 int i, n,quantidadeM=0,quantidadeH=0,quantidadeP=0;
 float h,hMaior=0,hMenor=4, hFem,hPopular=0,mediaHFem,mediaH,percentualH;
 char genero;
 
 for(i=1;i<=2/*50*/;i++)
 {
  printf("Genero:");
  scanf(" %c", &genero);
  genero = toupper(genero);
  
  printf("Altura:");
  scanf("%f", &h);

  hPopular+=h;

  if(genero=='F')
  {
    hFem+=h;
    quantidadeM++;
  }
  else
  {
    quantidadeH++;
  }
  if(h>=hMaior)
  {
   hMaior=h;
  }
  if (h<=hMenor) 
  {
    hMenor=h;
  }

  quantidadeP++;  
 }
 
mediaHFem=hFem/quantidadeM;
mediaH=hPopular/(i-1);
percentualH=(float)quantidadeH/quantidadeP;
 
if(quantidadeM==0)
{
  printf("Sem mulheres na pesquisa realizada");
}
else
{
  printf("\n%.1f",mediaHFem);
}
  printf("\n%.1f",hMaior);
  printf("\n%.1f",hMenor);
  printf("\n%.1f",mediaH);
  
  if(quantidadeH==0)
  {
    printf("\nSem homens na pesquisa realizada");
  }
  else
  {
    printf("\n%.1f",percentualH);

  } 
}