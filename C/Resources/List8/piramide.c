#include <stdio.h>

int main ()
{
	
	int n, i, j;
	
	printf("Cara, pela ultima vez, insira um numero:");
	scanf("%d", &n);
	
	for(i=n;i>0;i--)
	{
		for(j=0;j<=n-i;j++)
		{
			printf("%d", j+1);
		}
		printf("\n");
	}
	return 0;  
}