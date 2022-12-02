#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void verificador(int num, int vetor[], int tamanho, int *contMaior, int *contMenor)
{
	int i;
	
	for (i=0;i<tamanho;i++)
	{
		if (vetor[i]>num)
		{
			(*contMaior)++;
		}
		if (vetor[i]<num)
		{
			(*contMenor)++;
		}
	}
}

int main() 
{
	int n, QUANT=1, i;
	int maior;
	int menor;

	printf ("insira um numero ");
	scanf ("%d",&n);

	printf ("insira outro numero ");
	scanf ("%d",&QUANT);
	
	int v[QUANT];
	
	for (i=0;i<QUANT;i++)
	{
		v[i] = (-10) + rand()%50;
	}

	printf ("\n\nVetor: ");
	
	for (i=0;i<QUANT;i++)
	{
		printf ("%d ", v[i]);
	}
	
	verificador (n, v, QUANT, &maior, &menor);
	
	
	printf ("\na quantidade de numeros maiores e %d\n", maior);
	
	printf ("\na quantidade de numeros menores e %d", (menor-86)); // o compilador do DEV C pega algum lixo de memoria que soma 86
	
	return 0;
}