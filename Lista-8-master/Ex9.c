#include <stdio.h>
void mediaSoma (int n, int *soma, float *media);

void main ()
{
  int n,s;
  float m;

  printf("Entre com um numero:");
  scanf("%d",&n);

  mediaSoma(n,&s,&m);
  printf("Valor da soma:%d\n Valor da media:%.1f",s,m);
}

void mediaSoma (int n, int *soma, float *media)

{
  int i,quant;

  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      *soma+=i;
      quant++;
    }
  }
  *media=*soma/quant;
}


















































































/*//protótipos das funções
void somaMediaDivisores (int numero, int *soma, float *media);

//main
void main ()
{	
	//declaração de variáveis
	int valor;
	int somaDiv;
	float mediaDiv;
	
	//lendo o número
	printf ("Entre com um numero: ");
	scanf ("%d", &valor);
	
	//chamando a função	
	somaMediaDivisores (valor, &somaDiv, &mediaDiv);
	
	//exibindo os resultados
	printf ("\n\nSoma dos divisores: %d\nMedia: %.1f", somaDiv, mediaDiv);
}

//implementação das funções
void somaMediaDivisores (int numero, int *soma, float *media)
{
	//declaração de variáveis
	int i, s=0, cont=0;
	float m;
	
	//determinando os divisores de 'numero'
	for (i=1;i<=numero;i++)
	{
		if (numero%i==0)
		{
			s+=i;
			cont++;
		}
	}

	
	//calculando a média dos divisores
	m = (float)s/cont;
	
	//armazenando os resultados nos parâmetros de saída
	*soma = s;
	*media = m;
}*/