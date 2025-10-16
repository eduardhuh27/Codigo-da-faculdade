#include <stdio.h>

void maior (int vet[],int tamanho);
int preencher(int vetor[],int tamanho);

void main ()
{
     int tamanhoA;
 
    printf("Entre com o tamanho do vetorA:");
    scanf("%d",&tamanhoA);
    
    int vet[tamanhoA];
    
    preencher(vet,tamanhoA);  
    maior(vet,tamanhoA);
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
void maior(int vet[],int tamanho)
{
    int i,maior1=-10000,maior2;
    
    for(i=0;i<tamanho;i++)
    {
        if(vet[i]>maior1)
        {
            maior2=maior1;
            maior1=vet[i];
            
        }
        if((maior2<vet[i]) && (maior1>vet[i]))
        {
            maior2=vet[i];      
            
        }
    }
    printf("Maior de todos:%d\n\nSegundo maior:%d",maior1,maior2);
}

















