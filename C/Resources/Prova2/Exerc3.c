#include <stdio.h>

#define quant 20

int compareMajor(int n,int array[])
{
  int i =0, counter =0;
  while (i<(quant/2))
  {
    if (array[i] > n )
    {
      counter++;
    }
    
    i++;
  } 
  // if(counter == 0)
  // {
  //   return 0;
  // }else
  // {
  //   return counter;
  // }
  return counter;
}

int continueAfterHalf(int n, int array[])
{
  int i,counter;
  return counter; 
}

int main(int argc, char const *argv[])
{
  int array[quant]={-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,1,2,3,4,5,6,7,8,9,10};

  int numero,result,result2;
  printf("Digite N: ");
  scanf(" %d" ,numero);
  
  result= compareMajor(numero,array);

  printf("Quantidade de numeros superiores a N na primeira metade:  %d: ",result);
  printf("\n N aparece %d vezes na segunda metade", result2);
  
  return 0;
}
