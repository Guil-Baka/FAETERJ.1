#include <stdio.h>

int main(int argc, char const *argv[])
{
  
  int valor=1, lastValue=0, contRepetition=0, comparativoValue =0;
    while (valor!=0)
    {
      printf("digite um valor: ",valor);
      scanf ("%d",&valor);

      if (valor == lastValue && contRepetition ) //contador existe?
      {
        contRepetition++;
      } if(valor != lastValue) {
        contRepetition = 1;
        lastValue = valor;
      } else if (contRepetition) {
        printf("\n O numero: %d foi apresentado: %d vez", lastValue,contRepetition);
      }
    }
  return 0;
}
