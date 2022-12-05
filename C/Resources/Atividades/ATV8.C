#include <stdio.h>

#define tamanhoVetor 10
#define start 0

int checkConteudoByOrderOfReference(int vetConteudo[],int vetIndex[])
{
  int retorno,counterCheck=0;
  int i = ((vetIndex[0]));
  // printf("Debug check I: %d\n",i);
  // printf("Debug check: %d\n",vetConteudo[vetIndex[9]]);
  while (i<(tamanhoVetor))
  {
    if (vetConteudo[i] > vetIndex[0] )
    {
      counterCheck++;
    }
    // printf("Debug Sequencia: %d\n",vetConteudo[vetIndex[i]]);
    i++;
  }

  if(counterCheck == tamanhoVetor)
  {
    retorno=1;
  }
  else
  {
    retorno=0;
  }
  return retorno;
}

int main(int argc, char const *argv[])
{
  int resultado = 0;
  int vetConteudo[tamanhoVetor]=     {1,2,3,4,5,6,7,8,9,10};
  int vetIndex[tamanhoVetor]=        {0,1,2,3,4,5,6,7,8,9};
  resultado = checkConteudoByOrderOfReference(vetConteudo,vetIndex);
  printf("O retorno é: %d\n", resultado);
  return 0;
}
