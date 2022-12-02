#include <stdio.h>

int main(int argc, char const *argv[])
{
  float price, aVista, parc5x, parc10x;

  printf("Insert product price:");
  scanf("%f", &price);

  aVista =0.9*price;
  parc5x = price/5;
  parc10x = (price+(price*0.20))/10 ;

  printf("\n\nPrice: $ %.2f\n", price);
  printf("\n\nA vista: $ %.2f\n", aVista);
  printf("\n\nParcelado 5x $ %.2f\n", parc5x);
  printf("\n\nParcelado 10x $ %.2f\n", parc10x);
  return 0;
}
