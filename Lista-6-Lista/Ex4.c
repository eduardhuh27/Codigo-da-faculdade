# include <stdio.h>
void main()
{
int i,j,salario,mediaSalarial,salarioMaior=0, somaSa=0, filhos,somaFi=0, mediaFilhos,salarioMin=1000,quantidadeSaMin=0;
float percertualSalarioMin;

 for(i=1;i<=3/*300*/;i++)
 {
  printf("Salario:");
  scanf("%d",&salario);

  printf("Numero de filhos:");
  scanf("%d",&filhos);  
  
  somaSa+=salario;
  somaFi+=filhos;
  if(salario<=salarioMin)
  {
    quantidadeSaMin++;
  }
  if(salario>=salarioMaior)
  {
    salarioMaior=salario;
  }
 }
 j=i-1;
 percertualSalarioMin = (float)quantidadeSaMin/j;
 mediaSalarial=somaSa/j;
 mediaFilhos=somaFi/j;
 printf("\nMedia salarial da populacao:%d",mediaSalarial);
 printf("\nMedia de filhos da populacao:%d",mediaFilhos);
 printf("\nMaior salario:%d",salarioMaior);
 printf("\nPercentual da popilacao que recebe ate R$1000 :%.1f",percertualSalarioMin);


}