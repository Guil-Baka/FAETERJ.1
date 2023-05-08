#include <stdio.h>

void main(){

  int i,j,k,n;

  printf("Digite N");
  scanf("%d", &n);

  for (i = 1; i < n; i++)
  {
    printf("%d ",i);
    for (j = 1; j < n; j++)
    {
      printf("%d ",j);
      for (k = 1; k < n; k++)
      {
        printf("%d \n",k);
      }
      
    }
    
  }
  

}