#include <stdio.h>
#include <limits.h>

void main()
{
  int idade,idadeCM=0,idadeInferior=30,pesoM=0,maiorPeso=0, peso,pesado=INT_MIN,pesquisa=1;
  float mediaAltura=0, altura,somaAltura=0,alturaSuperior=1.65;

  while(pesquisa==1)
  
  {
    printf("Entre com a idade:");
    scanf("%d",&idade);

    printf("Entre com a altura:");
    scanf("%f",&altura);

    printf("Entre com o peso:");
    scanf("%d",&peso);
      if(idade>50)
      {
        idadeCM++;
      } 
      if(peso>80)
      {
        pesoM++;
        somaAltura+=altura;
      }
      if(idade<30)
      {
        if(altura>=1.65)
        {
          if(peso>=pesado)
            {
              maiorPeso++;
              pesado=peso;
            }
        }
      }
  

      printf("Deseja continuar a pesquisa ,sim(1) nao(0):");
      scanf("%d",&pesquisa);
  }
    
  mediaAltura=(float)somaAltura/pesoM;
  
  if(pesquisa==0)
  {
    if(idadeCM==0)
    {
      printf("Nao ha pessoas acima de 50 anos na pesquisa.");
    }
    else
    {
      printf("\nQuantidade de pessoas com mais de 50 anos:%d",idadeCM);
    }
    if(pesoM==0)
    {
      printf("Nao ha pessoas com mais do que 80 quilos na pesquisa.");
    }
    else
    {
      printf("\nMedia da altura das pessoas com mais de 80 kilos:%.1f",mediaAltura);
    }
    
    if(maiorPeso==0)
    {
      printf("Nao ha pesssoas com mais de 1.65 de altura ou nao ha pessoas com menos de 30 anos na pesquisa.");
    }
    else
    {
      printf("\nMaior peso entre as pessoas com mais de 1.65 de altura e idade abaixo dos 30:%d",pesado);
    }
      printf("\n\nPesquisa finalizada");
  }
}