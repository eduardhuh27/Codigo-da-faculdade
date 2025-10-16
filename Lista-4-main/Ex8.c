#include <stdio.h>


void main()
{
  int n, i, j,matricula, multas, valor, soma=0, total=0,multasMaisA=0,matriculaMaisV=0;
  
  printf("Entre com a quantidade de motoristas: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
 {
  printf("Matricula do motorista: ");
  scanf("%d", &matricula);

  printf("Quantidade de multas: ");
  scanf("%d", &multas);
  if(multas>1)
  {
    soma-=soma;
    for(j=1;j<=multas;j++)
    {
      printf("Valor da multa: ");
      scanf("%d", &valor);
      soma+= valor; 
    }
    
  }
  else
  {
    printf("Valor da multa: ");
    scanf("%d", &valor);
    soma=valor;
    
  } 
  if(multas>=multasMaisA)
  {

    matriculaMaisV= matricula;
  }
  printf("Valor total das multas do motorista: %d \n\n",soma);
      total+=soma;
 
 }
 printf("\nValor total de todas as multas:%d",total);
 printf("\nMatricula do motorista com a maior quantidade de multas:%d",matriculaMaisV);
}