#include <stdio.h>

void preencher(int vetor[],int tamanho);
void repetidos (int vet[],int tamanho);

void main ()
{
     int tamanhoA;
 
    printf("Entre com o tamanho do vetorA:");
    scanf("%d",&tamanhoA);
    
    int vet[tamanhoA];
    
    preencher(vet,tamanhoA);  
    repetidos (vet,tamanhoA);
}

void preencher(int vetor[],int tamanho)
{
    int i;
    
    for(i=0;i<tamanho;i++)
    {
        printf("Entre com o valor:");
        scanf("%d",&vetor[i]);
    }
}

void repetidos (int vet[],int tamanho)
{
    int i,j,achou=10000,cont=0;

    for (i=0;i<tamanho;i++)
    { 
        cont=0;
        if (achou!=vet[i])
        {
        for(j=0;j<tamanho;j++)
        {
            if(vet[i]==vet[j])
            {
                cont++;
                achou=vet[i];
            }
        }
    
        printf("%d foi achado %d vezes.\n",vet[i],cont);
    
        }
    }
}















