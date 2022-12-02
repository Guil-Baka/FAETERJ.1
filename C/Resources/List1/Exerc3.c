#include <stdio.h>

int main(int argc, char const *argv[])
{
  float h,peso;
  char genero;

  printf("\nInsira a altura: \n");
  scanf(" %f", &peso);

  printf("\nInsira o genero: \n");
  scanf(" %c", &genero); 
  
  if (genero=='m') 
  {
    peso = (72.2*h)-58;
  }
  else
  {
    peso = (62.1*h)-44.7;
  }
  
  return 0;
}
