#include <stdio.h>

int main(int argc, char const *argv[])
{
  int quantia, notas100, notas50, notas20, notas10, notas5, notas2, notas1, resto;

  printf("\nInsira a quantia em R$:\n");
  scanf("%d", &quantia);

  notas100 = quantia / 100;
  resto = (quantia % 100);

  notas50 = resto / 50;
  resto = resto % 50;

  notas20 = resto / 20;
  resto = resto % 20;

  notas10 = resto / 10;
  resto = resto % 10;

  notas5 = resto / 5;
  resto = resto % 5;

  notas2 = resto / 2;

  notas1 = resto%2;

  printf("Notas de 100 %d\n", notas100);
  printf("Notas de 50 %d\n", notas50);
  printf("Notas de 20 %d\n", notas20);
  printf("Notas de 10 %d\n", notas10);
  printf("Notas de 5 %d\n", notas5);
  printf("Notas de 2 %d\n", notas2);
  printf("Notas de 1 %d\n", notas1);
  return 0;
}
