#include <stdio.h>

float conversao (float celsius)
{
  float fahrenheit;
  
  fahrenheit= ((float)(celsius*9)/5) +32;
 
  return fahrenheit;
}

void main ()
{
  float celsius;

  printf("Entre com a temperatura em celsius:");
  scanf("%f",&celsius);

  printf("Temperatura em fahrenheit:%.1f",conversao(celsius));


}