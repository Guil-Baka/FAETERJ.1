#include <stdio.h>

int main(int argc, char const *argv[])
{
  float salario;
  float credit;

  printf("Insira seu salario medio: \n");
  scanf("%f", &salario);
  // printf("\n %f", salario);

  if (salario >= 2500)
  {
    printf("IF 1");
    credit = 0.4*salario;
  }
  else if (salario >= 1500)
  {
    printf("IF 2");
    credit = 0.3*salario;
  }
  else if (salario >= 1000)
  {
    printf("IF 3");
    credit = 0.2*salario;
  }
  else if (salario <= 1000)
  {
    printf("IF 4");
    credit = 0;
  }
  // printf("\n %f", salario);
  printf("\nCredit is %.2f ", credit);
  
  return 0;
}
