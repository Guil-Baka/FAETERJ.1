#include <stdio.h>

void funcFindMultiplos(float N1, int N2 ,float *maiorMultN2, float *menorMultN2)
{
  int i;
  i=1;
  while (i<=N1)
  {
    if (i%N2 == 0)
    {
      (*menorMultN2) = i;
    }
    i++;
  }
  i=(N1*N2);
  while (i>N1)
  {
    if (i%N2 == 0)
    {
      (*menorMultN2) = i;
    }
    i++;
  }
}

int main(int argc, char const *argv[])
{
  //maiorMultN2 deve ser menos ou igual N1
  //menorMultN2 deve ser maior que N1
  int N2;
  float N1,maiorMultN2,menorMultN2;
  maiorMultN2=1;
  printf("Digite num1: \n");
  scanf("%f", &N1);
  
  printf("digite num2: \n");
  scanf("%d", &N2);

  funcFindMultiplos(N1, N2, &menorMultN2, &maiorMultN2);

  printf("\n Maior mult de N2 é: %d", &maiorMultN2);
  printf("\n Menor mult de N2 é: %d", &menorMultN2);
  return 0;
}


