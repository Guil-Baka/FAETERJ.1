#include <stdio.h>

#define quant 10

int findMinorIndex(int vet[], int pos)
{
  int minorInIndex = pos;
  while (pos < quant)
  {
    if (vet[pos] < vet[minorInIndex]) 
    {
      minorInIndex = pos;
    }
    pos++;
  }
  return minorInIndex;
}

void replaceValues(int vetA[], int pos)
{
  int comparativo,temp;
  comparativo = findMinorIndex(vetA, pos);

  temp = vetA[comparativo];
  vetA[comparativo] = vetA[pos];
  vetA[pos] = temp;
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

int verifyPosInScope(int pos,int valueToValidate)
{
  int retorno = 0;
  if (pos > (valueToValidate-1))
  {
    retorno = -1;
  } else 
  {
    retorno = 0;
  }
  return retorno;
}

int main(int argc, char const *argv[])
{
  int pos,isPosValid;
  int array[quant]={5,4,3,2,1,1,2,3,4,5};

  showArrayContents(array);
  //exibe antes da alteração
  printf("Digite pos: \n");
  scanf("%d",&pos);
  //recebe pos
  isPosValid = verifyPosInScope(pos,quant);

  if(isPosValid != -1)
  {
    replaceValues(array,pos);//chama a função de troca
    showArrayContents(array);//exibe após a alteração caso haja
  }
  else
  {
    printf("Pos esta fora do escopo do array, Retorno: %d ", isPosValid);
  }
  return 0;
}
