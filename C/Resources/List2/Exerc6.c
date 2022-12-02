#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;
  float valueA,valueB,valueC,major,medium,minor;

  printf("Digite tres valores \n");
  scanf("\n%f",&valueA);
  scanf("\n%f",&valueB);
  scanf("\n%f",&valueC);

  printf("Escolha as opcoes");
  printf("\n1 - Tres valores em ordem crescente");
  printf("\n2 - Tres valores em ordem decrescente");
  printf("\n3 - Tres valores, o maior no meio");
  scanf("%d", &i);

    

  switch (i)
  {
  case 1:{if ((valueA<valueB) && (valueA<valueC))
  {
    if (valueB<valueC)
    {
      printf("%d %d %d\n", valueA, valueB, valueC);
    }
    
  }
  
  }
    break;
  case 2:{}
    break;
  case 3:{}
    break;
  default:
    break;
  }  
}
