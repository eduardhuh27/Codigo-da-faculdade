#include <stdio.h>
void main()
{
 int i,matricula, idade, idadeI, tempo,funcioabaixo, qMulheres=0,qMasc=0,tempoMaisA=0,tempoMaisN=1000,matriculaMaisA,matriculaMaisN=0;
 float salario,salarioMasc = 0,mediaSalarioMasc =0 ;
 char genero;
 for (i=1;i<=1/*250*/;i++)
 {
 //lendo o genero
 printf("Genero (F)eminino e (M)asculino: ");
 scanf(" %c",&genero);
  genero = toupper (genero);
 //lendo a matricula
 printf("Matricula: ");
 scanf("%d",&matricula);
 
 //lendo a idade
 printf("idade: ");
 scanf("%d",&idade);
 
 //lendo o tempo de trabalho
 printf("Tempo de trabalho (em anos): ");
 scanf("%d",&tempo);
 
 //lendo o salário
 printf("Salario: ");
 scanf("%f",&salario);

 //Colocando o genero para maiusculo
// genero = toupper (genero);
 
 //Caculo do ingresso 
 idadeI= idade - tempo;
 
 //verificando a idade de ingr
  if(idadeI <= 21)
  {
    funcioabaixo++;
  }

 //Verificando o genero
  if (genero=='F')
   {
    qMulheres++;
  }
  else
  {
    salarioMasc += salario;
    qMasc++ ;
  }
 //Verificando o funcionario mais antigo
  if(tempo>=tempoMaisA)
  {
    tempoMaisA=tempo;
    matriculaMaisA= matricula;
 
  } 
   //Verificando o funcionario mais novo
  if(tempo<=tempoMaisN)
  {
    tempoMaisN=tempo;
    matriculaMaisN=matricula;
  }
}

//Calculo da media salrial dos homens
 mediaSalarioMasc = salarioMasc/qMasc;

 printf("\nQuantidade de funcionarios que ingrssaram com menos que 21 anos: %d", funcioabaixo);
 printf("\nQuantidade de funcionarios mulheres : %d", qMulheres );
 if(qMasc>=1)
 {
  printf("\nMedia salarial dos homens: %.1f",mediaSalarioMasc);
  }
  else
  {
    printf("\nSem funcionarios do genero masculino");
  }
 printf("\nMatricula do funcionario mais antigo: %d",matriculaMaisA);
 printf("\nMatricula do funcionario mais recente: %d",matriculaMaisN);
}