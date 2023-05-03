#include <stdio.h>

#define quant 10

int checkIfVectorInSequence(int vet[],int arraySize)
{
  int retorno=1,compareBackToFront,i = 0;
  compareBackToFront = arraySize-1;
  while (i<(arraySize/2))
  {
    if(vet[i] != vet[compareBackToFront])
    {
      retorno = 0;
    }
    i++;
    compareBackToFront--;
  }
  return retorno;
}

int main(int argc, char const *argv[])
{
  int vet[quant]={1,2,3,4,5,5,4,3,2,1};
  int retorno;
  retorno = checkIfVectorInSequence(vet, quant);

  printf("O retorno é: %d\n", retorno);

  return 0;
}