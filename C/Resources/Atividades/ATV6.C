#include <stdio.h>
#include <math.h>
#include <locale.h>
// Desenvolver uma função que, dados um
// número inteiro n e um vetor contendo
// quant valores inteiros, altere a disposição
// dos elementos do vetor, de forma que os
// menores do que n fiquem no início da
// estrutura e os demais ao seu final.

void generateValues(int n ,int vetor[])
{
  int i;
  printf("A sequencia de valores aleatórios é: \n");
  for (int i =0; i<n;i++)
  {
    vetor[i] = rand() % (100);
    printf(" %d ", vetor[i]);
  }
}

int arrangeByGreater(int n, int vetor[], int numeros)
{
  int i, temp = 0, maiores=0;
  int vetorMaiores[maiores];
  for ( i = 0; i <=numeros; i++)
  {
    if (vetor[i] > n)
    {
      vetor[i] = vetorMaiores[maiores];
      printf("\n%d",vetorMaiores[maiores]);
      maiores++;
    }
  }
}

int main(int argc, char const *argv[])
{
  int n, numeros;
  printf("Digite N: \n");
  scanf("%d", &n);

  printf("Digite numeros: \n");
  scanf("%d", &numeros);
  
  int vetor[numeros];

  generateValues(n,vetor);
  arrangeByGreater(n,vetor,numeros);


  return 0;
}
