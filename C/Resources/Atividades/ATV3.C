#include <stdio.h>


void funcCompareN(float *n1, float *n2, float *n3)
{
  // printf("%.2f %.2f %.2f\n",*n1,*n2,*n3);

  float *temp;
  if ((*n1 < *n2) && (*n1 < *n3))
  {
    *temp=*n1;
    *n1=*n3;
    *n3=*temp;
  }
  if ((*n2 < *n1) && (*n2 < *n3))
  {
    *temp=*n2;
    *n2=*n3;
    *n3=*temp;
  }
  if ((*n2>*n1) && (*n2>*n3))
  {
    *temp=*n2;
    *n2=*n1;
    *n1=*temp;
  }
}

int main(int argc, const char** argv) 
{
  float A,B,C;
  printf("insira N1\n");
  scanf("%f",&A);
  printf("insira N2\n");
  scanf("%f",&B);
  printf("insira N3\n");
  scanf("%f",&C);
  
  funcCompareN(&A,&B,&C);

  printf("O maior numero eh: %.2f\nO numero medio eh: %.2f\nO menor numero eh %.2f", A,B,C);

  return 0;
}