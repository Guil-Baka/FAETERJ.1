#include <stdio.h>

int main(int argc, char const *argv[])
{
  int idade;

  printf("enter idade number\n");
  scanf("%d", &idade);

  if (idade>=0 && idade<=4)
  {
    printf("\nInfantil A");
  }
    else if (idade>=5 && idade<=7)
  {
    printf("\nInfantil B");
  } else if (idade>=8 && idade<=10) 
  {
    printf("\nInfantil C");
  } else if (idade>=11 && idade<=13)
  {
    printf("\nJuvenil A");
  } else if (idade>=14 && idade<=17)
  {
    printf("\nJuvenil B");
  }
  else{
    printf("\nAdulto"); 
  }
}