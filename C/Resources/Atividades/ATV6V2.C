#include <stdio.h>

#define vetorSize 10

//Como eu tinha conversado com você professor tentei fazer a 6 na aula do 
//professor Bispo antes da prova, após a prova mencionei que a lógica da 
//questão de analise podia ser facilmente adaptavel para resolver a ATV6
//Inicialmente eu ia identificar a ordem e atribuir os valores maiores que N 
//a um outro vetor chamado vetorMaiores para exibir após N e outro chamado
//vetorMenores para exibir antes de N

int sortBySize(int array[], int tamanhoVetor, int iFuncAnterior, int numero) 
{
int i, valor= iFuncAnterior;
	for (i=iFuncAnterior+1;i<tamanhoVetor;i++)
	{
		if (array[i] <= numero) 
		{
			numero= array[i];
			valor= i;
		}
	}
return valor;
}
void repeatSortAndReplace (int vetor[], int tamanhoVetor, int num) 
{
	int i, j;
	for (i=0;i<tamanhoVetor;i++) 
	{
	j = sortBySize(vetor,tamanhoVetor,i, num);
	replaceValues(&vetor[i], &vetor[j]);
	}
  endShowXValues(vetor, tamanhoVetor);
}
void replaceValues(int *valorA, int *valorB) 
{
	int temp;
	temp=    *valorA;
	*valorA= *valorB;
	*valorB= temp;
}
void endShowXValues(int v[], int tam) 
{
	int i;
	for (i=0;i<tam;i++) 
	{
		printf ("\n %d ", v[i]);
	}
}

int main(int argc, char const *argv[])
{
  int arrayToSort[vetorSize] = {9,18,27,36,45,54,63,72,81,90};
	int numero;

	printf("Insira um numero N: ");
	scanf("%d", &numero);
	
	repeatSortAndReplace(arrayToSort, vetorSize, numero);  
  return 0;
}


