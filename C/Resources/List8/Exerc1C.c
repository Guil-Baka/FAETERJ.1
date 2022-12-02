/*
	FAETERJ - Rio
	FAC - Turmas A e B
	Data: 15/10/2022
	
	Lista de Exercícios VIII
	
	Questão 01:
	Dados três números inteiros a, b e c, implementar um programa que exiba os números 
	do intervalo definido por a e b (sempre começando em a e terminando em b), com 
	exceção daqueles que sejam múltiplos de c.

	Exemplos:

	a = 10, b = 20, c = 3
		Saída: 10, 11, 13, 14, 16, 17, 19, 20 

	a = 25, b = 18, c = 5
		Saída: 24, 23, 22, 21, 19, 18

	Nota: devem ser apresentadas três versões do programa, uma para cada estrutura 
	de repetição estudada.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int a, b, c, i;
	
	//solicitando os números
	printf ("Entre com os dois valores que definem o intervalo: ");
	scanf ("%d %d", &a, &b);
	
	printf ("Entre com um numero: ");
	scanf ("%d", &c);
	
	//verificar quem é o maior
	if (a < b)
	{
		//repetição crescente
		i=a;
		
		do
		{
			//verificando se 'i' não é múltiplo de 'c'
			if (i%c != 0)
			{
				printf ("%d ", i);
			}
			
			i++;
		}
		while (i<=b);
	}
	else
	{
		//repetição decrescente
		i=a;
		
		do
		{
			//verificando se 'i' não é múltiplo de 'c'
			if (i%c != 0)
			{
				printf ("%d ", i);
			}
			
			i--;
		}
		while (i>=b);
	}
}