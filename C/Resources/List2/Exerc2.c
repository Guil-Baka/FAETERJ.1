#include <stdio.h>

int main(int argc, char const *argv[])
{
  
  float gravidade,pesoPlaneta,pesoTerra;
  int planetNum;

  printf("\nQual é o seu peso gordola?");
  scanf("%f", &pesoTerra);

  printf("\nDigite o numero correspondente ao planeta\n");
  printf("1 - Mercurio \n");
  printf("2 - Vênus \n");
  printf("3 - Marte \n");
  printf("4 - Jupiter \n");
  printf("5 - Saturno \n");
  printf("6 - Urano \n");
  scanf("%d", &planetNum);
  switch (planetNum)
  {
    case 1: gravidade = 0.37;
  break;
    case 2: gravidade = 0.88;
  break;
    case 3: gravidade = 0.38;
  break;
    case 4: gravidade = 2.64;
  break;
    case 5: gravidade = 1.15;
  break;
    case 6: gravidade = 1.17;
  break;
  }

  pesoPlaneta = (pesoTerra*1.00)*gravidade;

  printf("\nPeso no planeta escolhido: %0.2f\n",pesoPlaneta);
  return 0;
}
