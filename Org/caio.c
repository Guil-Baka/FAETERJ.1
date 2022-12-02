#include <stdio.h>

int main(int argc, char const *argv[])
{
  char i;
  printf("Davi e gay?\n");
  scanf("%C", &i);
  
  if (i == 'S' || i == 's' || i == 'sim' || i == 'Sim')
  {
    printf("Davi e Viadinho");
  }
  else if (i == 'N' || i == 'n' || i == 'nao' || i == 'Nao')
  {
    printf("Davi n e Viadinho");
  }
  else
  {
    printf("Escreve direito porra");
  }
  
  return 0;
}
