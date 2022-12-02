/*
	FAETERJ - Rio
	FAC - Turmas A e B
	Data: 15/10/2022
	
	Lista de Exercícios VIII
	
	Questão 02:
	Construir um programa que, dado um número inteiro n fornecido pelo usuário, 
	exiba uma sequência de elementos, distribuídos em linhas, como nos exemplos a seguir:

	Exemplos:

	N = 7

		1	0	0	0	0	0	0
		2	1	0	0	0	0	0
		3	2	1	0	0	0	0
		4	3	2	1	0	0	0
		5	4	3	2	1	0	0
		6	5	4	3	2	1	0
		7	6	5	4	3	2	1

	N = 4

		1	0	0	0
		2	1	0	0
		3	2	1	0
		4	3	2	1
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, j, k;
	
	//solicitando o valor de n
	printf ("Entre com o valor de n: ");
	scanf ("%d", &n);
	
	//variando 'i' para controlar as linhas que serão exibidas
	for (i=1;i<=n;i++)
	{
		//escrevendo os valores que vão do número da linha até o número 1
		for (j=i;j>=1;j--)
		{
			printf ("%d ", j);
		}
		
		//escrevendo os 0 de cada linha
		for (k=1;k<=n-i;k++)
		{
			printf ("%d ", 0);
		}
		
		printf ("\n");
	}
}