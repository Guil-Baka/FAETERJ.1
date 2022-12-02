#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a,b;
  int multi,n;
  int i = 0;

  printf("Insira o numero para multiplicar: ");
  scanf("%d",&n);

  for (  a = 1; a <= n; a++)
  {
    for ( b = 0; b <10; b++)
    {
      multi = a * b;
      printf("%d*%d = %d\n",a,b,multi);
    }
  }
  printf("\n FOR END \n");
  a=1;
  
  while (a<=n)
  {
    b=0;
    while (b<=9)
    {
      multi = a * b;
      printf("%d*%d = %d\n",a,b,multi);
      b++;
    }
    a++;
  }
  printf("\n WHILE END \n");
  a=1;
  do
  {
    b=0;
    do
    {
      multi = a * b;
      printf("%d*%d = %d\n",a,b,multi);
      b++;
    } while (b<=9);
    a++;
  } while (a<=n);

  printf("\n DO WHILE END \n");
  return 0;
}


