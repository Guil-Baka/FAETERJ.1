#include <stdio.h>

int doMdc(int num1, int num2)
{
  int result,i,pontoInicial,contador=0;

  if (num1<num2)
  {
    pontoInicial = num1;
  } else {
    pontoInicial = num2;
  }
  // printf("%d", pontoInicial);
  for (int i=1;i<=pontoInicial; i++)
  {
    if((num1%i==0) && (num2%i==0))
    {
      contador++;
    }
  }
  return contador;
}

int main(int argc, char const *argv[])
{
  int a,b,result;
  printf("Digite A: \n",a);
  scanf("%d",&a);
  printf("Digite B: \n",b);
  scanf("%d",&b);

  result=doMdc(a,b);

  printf("Resultado: %d \n",result);
  
}
