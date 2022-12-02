#include <stdio.h>

int funcPow(int *x, int *y) //se eu fizer a minha pow eu posso usar? hahahahah

{
  long int power = 1;
  int i;
  for (i = 1; i <= *y; i++)
  {
    power = power * (*x);
  }
  return power;
}

float calculateS(int n) 
//fiquei horas tentando entender porque os valores de memoria
//estouravam usando ponteiro, quando achei que apenas o suicidio era a solução
//eu desisti de usar ponteiro e tudo funcionou.
//Ainda vou me matar, mas por indignação.
{
  int i, j, alteraSinal = 1;
	float pow;
	float result = 0;
	
	for (i = 1; i <= n; i++, alteraSinal *= -1) //calcula N vezes o conjunto, já levando em consideração os valores negativos que irão ocorrer
                                              // a solução mais idiota que existe é a mais inteligente
	{                                           // Trocar de sinal usando multiplicação.
		pow=funcPow(&i,&i);//ué não podia usar power?	
	  result += (pow/(n-(i-1)))*alteraSinal;
  }
  return result; //Acho que é a maneira mais pratica de retornar o resultado pra main.
}

int main(int argc, const char** argv) 
  { 
    int n;
    float final;
    printf("Digite N: \n");
    scanf("%d", &n);
    final = calculateS(n);// atribui o return da função a um result dentro da main

    printf("resultado: %.0f", final);
  }