#include <stdio.h>

int contido (int vetA[], int vetB[],int tamanhoA, int tamanhoB);
int preencher(int vetor[],int tamanho);
int main ()
{
 int tamanhoA,tamanhoB,retorno;
 
    printf("Entre com o tamanho do vetorA:");
    scanf("%d",&tamanhoA);
    
    printf("Entre com o tamanho do vetorB:");
    scanf("%d",&tamanhoB);
    
    int vetA[tamanhoA];
    int vetB[tamanhoB];
    
    preencher(vetA,tamanhoA);    
    preencher(vetB,tamanhoB);
    
    retorno=contido(vetA,vetB,tamanhoA,tamanhoB);
    
    printf("%d",retorno);
}

int preencher(int vetor[],int tamanho)
{
    int i;
    
    for(i=0;i<tamanho;i++)
    {
        printf("Entre com o valor:");
        scanf("%d",&vetor[i]);
    }
}

int contido (int vetA[], int vetB[],int tamanhoA, int tamanhoB)
{
    int i,j,cont=0;
    if (tamanhoA>tamanhoB)
    {
        for(i=0;i<tamanhoA;i++)
        {
            
            for(j=0;j<tamanhoB;j++)
            {
                if(vetA[i]==vetB[j])
                {
                    cont++;
                    break;
                }
            }
            if (cont==tamanhoB)
            {
                return 2;
            }
        }
    }
    else
    {    for(i=0;i<tamanhoB;i++)
        {
            for(j=0;j<tamanhoA;j++)
            {
                if(vetB[i]==vetA[j])
                {
                    cont++;
                    break;
                }
            }
            if (cont==tamanhoA)
                {
                    return 1;
                }
        }
    }
    return 0;
}
