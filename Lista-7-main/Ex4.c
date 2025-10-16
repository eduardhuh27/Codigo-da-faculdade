#include <stdio.h>

void main ()
{
  int n,i,j=0,primo=0;

  printf("Entre com o valor de n:");
  scanf("%d",&n);

  for (i=1;i<=n;i++)
    { 
      if(n%i==0)
        {
          j++;
        }
      }
       // while(primo==0)
        
        if(j==2) 
        { 
          printf("\n%d e primo\n",n);
         // printf("Entre com o valor de n:");
          // scanf("%d",&n);
           //j-=2;
        }   
        else
            {
               printf("\n%d nao e primo",n);
              //primo=1;
            }
        
        
    
} 
/*include <stdio.h>

void main() {
    int n, i, primo = 1; // Assume que é primo inicialmente
    
    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);
    
    // Tratamento para números menores que 2
    if (n < 2) 
    {
        primo = 0;
    }
    else 
    {
        // Verifica divisibilidade de 2 até N/2
      for (i = 2; i <= n/2; i++) 
      {
        if (n % i == 0) 
        {
          primo = 0; 
            break;
        }
      }
    }
    
    // Exibe o resultado
    if (primo==1)
    {
        printf("%d eh um numero primo.\n", n);
    } 
    else 
    {
        printf("%d nao eh um numero primo.\n", n);
    }
    
}*/
