#include <stdio.h>

#define quant 10

void compareArray(int vetA[],int vetB[],int tamanhoArray)
{
  int i = 0;
  while (i < tamanhoArray)
  {
    if (vetA[i] > vetB[i])
    {
      // chama a função de substituição
      replaceValues(vetA, vetB,i);
    }
    i++;
  }
}

void replaceValues(int vetA[], int vetB[], int indexInArray)
{
  int temp;
  temp = vetA[indexInArray];//seg fault? Esquece resolvi
  vetA[indexInArray] = vetB[indexInArray];
  vetB[indexInArray] = temp;
}

void showArrayContents(int vet[])
{
  int i;
  for (i = 0; i < quant; i++)
  {
    printf("%d, ",vet[i]);
  }
  printf("\n");
}

int main(int argc, char const *argv[])
{
  int vetA[quant]={10,9,8,7,6,5,4,3,2,1};
  int vetB[quant]={1,2,3,4,5,6,7,8,9,10};
  showArrayContents(vetA);
  showArrayContents(vetB);
  //exibe o conteudo antes da chamada da função
  compareArray(vetA,vetB,quant);
  //compara os valores para substituir
  printf("\n\n\n");
  //exibe os dois vetores após a substituição dos valores
  showArrayContents(vetA);
  showArrayContents(vetB);
  return 0;
}


