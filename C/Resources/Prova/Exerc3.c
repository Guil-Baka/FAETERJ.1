#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
  float memoria=0, varA, resultado=0;
  char selection;

  do
  {
    printf("Digite [A] para Soma, [B] para subtracao, [C] para multiplicação, [D] para divisao, [E] para limpar a memoria, [F] para encerrar");
    scanf("%c", &selection);
    // putchar(toupper(selection));
    if (selection == 'A')
    {
      printf("Digite o valor para ser somado ao inicial:\n");
      scanf("%f\n", varA);

      resultado = memoria+varA;

    }

    if (selection == 'E')
    {
      memoria=0;
      printf("/n Memoria zerada/n");
    }
    
  } while (selection!='F');
  
 


  return 0;
}
