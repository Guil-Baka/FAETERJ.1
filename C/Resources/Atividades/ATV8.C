#include <stdio.h>

#define tamanhoVetor 10

int checkConteudoByOrderOfReference(int vetConteudo[],int vetIndex[])
{
  int result = 0;
  int i = vetIndex[0];
  while (vetIndex[i]<tamanhoVetor)
  {

    // if (vetConteudo[i] > )
    // {

    // }
    result = vetConteudo[vetIndex[i]];
    printf("%d\n",result);
    i++;
  }
  return result;
}

int main(int argc, char const *argv[])
{
  int vetConteudo[tamanhoVetor]=     {1,2,3,4,5,6,7,8,9,10};
  int vetIndex[tamanhoVetor]=        {0,1,2,3,4,5,6,7,8,9};
  checkConteudoByOrderOfReference(vetConteudo,vetIndex);
  return 0;
}
