#include <stdio.h>
#include <stdlib.h>

//Autores:
// Guilherme de Almeida Martins
// Guinevere Siqueira Afonseca

#define TAM 10
#define TRUE 1
#define FALSE 0

void main ()
{
	int vet[TAM]={0,10,20,30,40,50,60,70,80,90};
	int num=0, bus, i, result;

	printf (" Menu: \n 1-inserir novo numero. \n 2-excluir valor. \n");
	printf (" 3-excluir valor da posicao desejada. \n 4-alterar valor. \n");
	printf (" 5-pesquisar valor. \n 6-exibir vetor. \n 7-fechar programa.\n");
	printf (" Insira a opcao desejada: ");
	scanf ("%d", &num);

  // fflush(stdout);
	do 
	{
	if ((num<8)&&(num>0))
	{
		switch (num)
		{
			case 1:
        result = inserir(&vet, TAM);
        funcShowArrayAndIndex(vet, TAM);
        num = -1;
			break;
      case 2:
			  removeNumero(&vet, TAM);
        funcShowArrayAndIndex(vet,TAM);
			//funcao acha valor e exclui valor
        num = -1;
      break;
			case 3:
      // excluir valor na posição X
			  excluirNumeroNaPosicao(vet,TAM);
        num = -1;
			break;
			case 4:				
			  alterar(vet,TAM);
        num = -1;
			break;
				
			case 5:
			  result=buscar(vet, TAM);
			  if(result!=-1)
        {
          printf("\nO numero %d se encontra na posicao %d\n",vet[result],result);
        }else
        {
          printf("\nRetorno %d. Numero nao existe no vetor\n",result);
        }
        num = -1;
			break;
				
			case 6:
				exibir (vet, TAM);
				num = -1;
      break;
			
		}
	}
  if (num == -1)
  {
    printf (" \n\nMenu: \n 1-inserir novo numero. \n 2-excluir valor. \n");
  	printf (" 3-excluir valor da posicao desejada. \n 4-alterar valor. \n");
	  printf (" 5-pesquisar valor. \n 6-exibir vetor. \n 7-fechar programa.\n");
	  printf (" Insira a opcao desejada: ");
	  scanf ("%d", &num);
  } 
	else
	{
		printf ("Esse numero eh invalido, tente novamente: ");
		scanf ("%d", &num);
		//esse achei lindinho. e funciona.
	}
} while (num!=7);
	printf ("fim do programa.");
	//yey agr falta todo o resto ;-;
}

void debugPrint()
{
  printf ("\nDebugCheck\n");
}

int funcCheckIfAlreadyExists(int vet[], int tamanho, int num)
{
  int i,comparativo = num;
  int contadorRepetidos=0;
  for (i = 0; i < tamanho; i++)
  {
    if (vet[i] == comparativo)
    {
      contadorRepetidos++;
    }
  }
  if (contadorRepetidos != 0)
  {
    return TRUE;
  }else
  {
    return FALSE;
  }
}

int funcShowArrayAndIndex(int vet[], int tamanho)
{
  int i;
  printf("\nIndice do vetor  : ");
  for (i = 0; i < tamanho; i++)
  {
    printf("%d," ,i);
  }
  printf("\nConteudo do vetor: ");
  for (i = 0; i < tamanho; i++)
  {
    printf("%d," ,vet[i]);
  }
}

int inserir(int vet[], int tamanho)
{
  funcShowArrayAndIndex(vet, tamanho);
	int val, posicao, seRepete;
	
	printf ("\nInsira novo valor: ");
	scanf ("%d", &val);
	
	printf ("\nInsira a posicao: ");
	scanf ("%d", &posicao);
	
  seRepete = funcCheckIfAlreadyExists(vet, tamanho, val);
  if (seRepete == TRUE)
  {
    printf ("\nO valor já existe no vetor\n");
  }
	if (seRepete == FALSE)
	{
    vet[posicao]=val;
	}
	return vet[posicao];
}

int removeNumero(int vet[], int tamanho)
{
  funcShowArrayAndIndex(vet, tamanho);
  int checkReplaced=FALSE,i=0,val;
	printf("\n Digite o valor que deseja excluir\n");
  scanf("%d",&val);

  while ((checkReplaced == FALSE)&&(i<tamanho))
  {
    if (vet[i] == val)
    {
      vet[i] = 0;
      checkReplaced = TRUE;
    }
    i++;
  }
  if (checkReplaced == TRUE)
  {
    printf("\nValor resetado para 0\n");
    funcShowArrayAndIndex(vet, tamanho);
  }else
  {
    printf("\nValor não achado\n");
  }
}

int excluirNumeroNaPosicao(int vet[], int tamanho)
{
	funcShowArrayAndIndex(vet, tamanho);
  int i=0,pos;

  printf("\nDigite qual posição deseja resetar o valor: ");
  scanf("%d", &pos);

  while (i<=pos)
  {
    if(i==pos)
    {
      vet[i] = 0;
    }
    i++;
  }
  funcShowArrayAndIndex(vet,tamanho);
}

int alterar(int vet[], int tamanho)
{
	//insira um valor, veririfa se está no vetor, pergunta o valor que o substituirá.
  int valueToReplace,posValorBuscado;

  posValorBuscado=buscar(vet,tamanho);
  if (posValorBuscado!=-1)
  {
    printf("\nValor insira um valor novo para substituir o valor %d: ",vet[posValorBuscado]);
    scanf("%d",&valueToReplace);

    vet[posValorBuscado] = valueToReplace;

    printf("\nValor foi substituido por %d",vet[posValorBuscado]);
  }else
  {
    printf("\nValor não existe no vetor\n");
  }
}

int buscar(int vet[], int tamanho)
{
  funcShowArrayAndIndex(vet, tamanho);

	int ele, i=0,checkContinue=FALSE,armazenamentoRetorno=0;
	printf ("\nInsira numero desejado: ");
	scanf ("%d", &ele);
  
	while ((checkContinue == FALSE)&&(i<tamanho))
  {
    if (vet[i] == ele)
    {
      armazenamentoRetorno=i;
      checkContinue = TRUE;
    }
    i++;
  } 
  if (checkContinue == TRUE)
  {
    return armazenamentoRetorno;
  }else
  {
    return -1;
  }
	//n funciona, mas acho q a logica ta certa.
	//problema com case??
}

int exibir(int vet[], int tamanho)
{
	
  int i;
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d", vet[i]);
	}
	//o unico decente pq tbm eh ridiculo.
}