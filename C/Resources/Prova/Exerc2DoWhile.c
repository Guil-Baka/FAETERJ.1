#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, vezes, base=0, potencia=1;

  printf("Digite quantas potencias vc quer: ");
  scanf("%d", &vezes);
  printf("\nDigite de qual numero será essas potencias: ");
  scanf("%d", &base);
  
  printf("1 ");
  i=1;
  do
  {
    potencia=potencia*base;
    printf("%d ", potencia);
    i++;
  } while (i<vezes);
  
  
  // i=1;
  // while (i<vezes)
  // {
  //   potencia=potencia * base;
  //   printf("%d ", potencia);
  //   i++;
  // }
  
  // for (i = 0; i <= vezes; i++)
  // {
  //   potencia=potencia * base;
  //   printf("%d ", potencia);
  // }


  return 0;
}
