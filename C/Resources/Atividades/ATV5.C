#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define numeros 10
#define minValue 0
#define maxValue 0


int compareValues(int *numMaior, int *numMenor, int N, int array[],int nums)
{
  int i;
  for ( i = 0; i < nums; i++)
  {
    if (array[i] > N)
    {
      (*numMaior)++;
    }
    if (array[i] < N)
    {
      (*numMenor)++;
    }
  }
}

int generateValues(int nums ,int array[])
{
  int i;
  printf("A sequencia de valores aleatórios é: \n");
  for (int i =0; i<nums;i++)
  {
    array[i] = rand() % 50;
    printf(" %d ", array[i]);
  }
}

int main(int argc, char const *argv[])
{
  int N;
  int numeros;

  int maior=0,menor=0;

  printf("Digite quant: \n");
  scanf("%d",&numeros);
  int values[numeros];

  generateValues(numeros,values);//gera valores aleatorios inicializando os numeros dentro do array values

  printf("\nDigite N: ");
  scanf("%d",&N);

  compareValues(&maior,&menor,N,values,numeros);//faz a comparação dos valores
  
  printf("Valores maiores que N == %d \n",maior);
  printf("Valores menores que N == %d \n",menor);

  return 0;
}
