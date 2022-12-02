#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, vezes, base=0, potencia=1;

  printf("Digite quantas potencias vc quer: ");
  scanf("%d", &vezes);
  printf("\nDigite de qual numero será essas potencias: ");
  scanf("%d", &base);
  
  printf("1 ");
  for (i = 1; i < vezes; i++)
  {
    potencia=potencia * base;
    printf("%d ", potencia);
  }


  return 0;
}
