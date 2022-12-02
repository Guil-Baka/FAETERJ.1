#include <stdio.h>

int main()
{
  float impA,impB;
  float valor,res;

  printf("\nInsira o custo de fabrica: ");
  scanf("%f",&valor);

  printf("\nInsira o impA: ");
  scanf("%f",&impA);
  
  printf("\nInsira o impB: ");
  scanf("%f",&impB);

  res = ((valor * (impA/100)) + (valor * (impB/100))) + valor;

  printf("\nCusto ao consumidor final: %.2f", res);
  
  return 0;
}
