/*
	FAETERJ - Rio
	FAC - Turmas A e B
	Data: 15/10/2022
	
	Lista de Exercícios VIII
	
	Questão 04:
	Na matemática, dois números são chamados de primos entre si quando o seu único 
	divisor em comum é a unidade (ou seja, o número 1). 
	Considerando este conceito, implementar um programa que, dados dois números inteiros, 
	determine se são ou não primos entre si.
	
	Exemplos:
	
			n1: 10		divisores: 1,2,5,10
			n2: 5		divisores: 1,5
				Não são primos entre si
				
				
			n1: 10		divisores: 1,2,5,10
			n2: 3		divisores: 1,3
				São primos entre si
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//main
void main ()
{
	//declaração de variáveis
	int n1, n2, menor, i,
	    primos = TRUE;
	
	//solicitando os dois valores
	printf ("Entre com dois numeros: ");
	scanf ("%d %d", &n1, &n2);
	
	//determinando o menor
	if (n1 < n2)
	{
		menor = n1;
	}
	else
	{
		menor = n2;
	}

	//verificando se há algum divisor comum de 'n1' e 'n2' no intervalor de 2 a 'menor'
	for (i=2;i<=menor;i++)
	{
		if ((n1%i==0) && (n2%i==0))
		{
			primos = FALSE;
		}
	}
	
	//exibindo o resultado
	if (primos == TRUE)
	{
		printf ("\n\nOs numeros %d e %d sao primos entre si!", n1, n2);
	}
	else
	{
		printf ("\n\nOs numeros %d e %d NAO sao primos entre si!", n1, n2);
	}
}
