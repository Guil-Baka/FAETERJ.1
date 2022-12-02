#include <stdio.h>

//EU NÃO CONSEGUI TRANSFORMAR ESSA M**DA EM FUNÇÃO AAAAAAAAAAAAAA
int main(int argc, char const *argv[])
{
  
  int   code, quantity, retorno=1;
  float value, total;

  printf("Selecione um codigo de produto: \n");
  printf("101 -- 3,50 \n");
  printf("102 -- 5,00 \n");
  printf("103 -- 7,80 \n");
  printf("104 -- 5,00 \n");
  printf("105 -- 8,20 \n");
  printf("106 -- 6,40 \n");
  printf("107 -- 4,75 \n");
  printf("108 -- 3,60 \n");
  printf("109 -- 6,00 \n");
  printf("110 -- 4,30 \n");
  scanf("%d", &code);

  if ((code<101)||(code>110))
  {
    printf("Codigo invalido");
    retorno=-1;
  }else{
    printf("Informe a quantidade de itens: \n");
    scanf("%d", &quantity);
  
    switch (code)
    {
    case 101:
      value=3,50;
      total=value*quantity;
      break;
    case 102:
      value=5,00;
      total=value*quantity;
      break;
    case 103:
      value=7,80;
      total=value*quantity;
      break;
    case 104:
      value=5,00;
      total=value*quantity;
      break;
    case 105:
      value=8,20;
      total=value*quantity;
      break;
    case 106:
      value=6,40;
      total=value*quantity;
      break;
    case 107:
      value=4,75;
      total=value*quantity;
      break;
    case 108:
      value=3,60;
      total=value*quantity;
      break;
    case 109:
      value=6,00;
      total=value*quantity;
      break;
    case 110:
      value=4,30;
      total=value*quantity;
      break;
    }
    printf("Esse produto nessa quantidade totalizam em: %.2f\n",&total);
  }

  return retorno;
}
