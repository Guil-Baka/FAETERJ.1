#include <stdio.h>

void funcDepurarParaVetor(int vet[], int numero)
{
  // numero 123 por exemplo
  vet[2] = (numero %10); // 3
  vet[1] = (((numero-vet[2])/10)%10);  // 2
  vet[0] = ((((numero-vet[2])/10)-vet[1])/10);  // 1
}

void printNumeroPorExtenso(int vet[])
{

  if (vet[0] != 0)
  {
    switch (vet[0])
    {
    case 9:
      printf("Novecentos ");
      break;
    case 8: 
      printf("Oitocentos ");
      break;
    case 7:
      printf("Setecentos ");
      break;
    case 6:
      printf("Seiscentos ");
      break;
    case 5:
      printf("Quinhentos ");
      break;
    case 4:
      printf("Quatrocentos ");
      break;
    case 3:
      printf("Trezentos ");
      break;
    case 2:
      printf("Duzentos ");
      break;
    case 1:
      if ((vet[2] == 0)&&(vet[1] == 0))
      {
        printf("Cem ");
      } else
      {
        printf("Cento ");
        
      }
      break;
    }
  }
  
  if (vet[1] != 0) 
  {
    switch (vet[1])
    {
    case 9:
      printf("Noventa ");
      break;
    case 8: 
      printf("Oitenta ");
      break;
    case 7:
      printf("Setenta ");
      break;
    case 6:
      printf("Sessenta ");
      break;
    case 5:
      printf("Cinquenta ");
      break;
    case 4:
      printf("Quarenta ");
      break;
    case 3:
      printf("Trinta ");
      break;
    case 2:
      printf("Vinte ");
      break;
    case 1:
      printf("Dez ");
      break;
    }
  }

  if (vet[2] != 0)
  {
    switch (vet[2])
    {
    case 9:
      printf("Nove ");
      break;
    case 8: 
      printf("Oito ");
      break;
    case 7:
      printf("Sete ");
      break;
    case 6:
      printf("Seis ");
      break;
    case 5:
      printf("Cinco ");
      break;
    case 4:
      printf("Quatro ");
      break;
    case 3:
      printf("Tres ");
      break;
    case 2:
      printf("Dois ");
      break;
    case 1:
      printf("Um ");
      break;
    }
  }
}

int main(int argc, char const *argv[])
{
  int numero,vet[3];
  printf("Digite um numero de 0 a 999");
  scanf("%d",&numero);

  funcDepurarParaVetor(vet,numero);
  printNumeroPorExtenso(vet);

  // printf("%d ", vet[2]);
  // printf("%d ", vet[1]);
  // printf("%d ", vet[0]);

  


  return 0;
}
