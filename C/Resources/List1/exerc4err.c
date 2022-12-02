#include <stdio.h>

void main ()
{
	float SM, C;
	
	printf("Digite seu saldo medio:");
	scanf("%f", &SM);
	
	if (SM>=2500.00)
	{
		C = ((40/100)*SM);
	}
	else
	{
		if (SM>=1500.00)
		{
			C = ((30/100)*SM);
		}
		else
		{
			if (SM>=1000.00)
			{
				C = ((20/100)*SM);
			}
			else
			{
				if (SM<=1000)
				{
					C = 0;
				}
			}
		}
	}
		printf("\nDe acordo com seu saldo medio, voce tem direito a %.2f %", C);
}