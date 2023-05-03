#include <stdio.h>

void main()
{
  int n, maiorNum;
  float valor,media = 0;

  printf("Digite o N: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Digite o valor:");
    scanf("%d", &valor);

    if (valor > maiorNum)
    {
      maiorNum = valor;
    }
    media += valor;
  }
  printf("O maior numero digitado foi: %d", maiorNum);
  media /= n;
  printf("A media dos numeros digitados foi: %f", media);
}