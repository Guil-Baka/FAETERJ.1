#include <stdio.h>

#define vetorSize 5


int calcM (int v[], int tamanhoVetor)
{
	int i, j=0; 
	float media;
	
	for (i=0;i<tamanhoVetor;i++)
	{
		j+=v[i];
	}
	media=j/tamanhoVetor;
	return media;
}

// int showResultXTimes (int arrayConteudo[], int tamanho, int num)
// {
// 	int i, j;
	
// 	for (i=0;i<tamanho;i++) 
// 	{
// 		j= checkMenorAndReplace(arrayConteudo,tamanho,num);
// 	}
// 	printf ("resultado %d", j);
// }

// int checkMenorAndReplace(int arrayConteudo[], int tamanhoVetor, int d) 
// {
// 	int i, menor=0, replaceMenor=0;
	
// 	for (i=0;i<tamanhoVetor;i++);
// 	{
// 	 menor=d-arrayConteudo[i];
		
// 		// if (d=arrayConteudo)
// 		// {
			
			
// 		// }
// 	}
// 	arrayConteudo[i]=replaceMenor+d;
// return arrayConteudo[i];
// }

int main(int argc, const char** argv) {

  int arrayConteudo[vetorSize]={10,3,4,6,8};
	
  float media; //Hehehe eu tinha feito divisão de inteiro, sou imbecil
  media=calcM(arrayConteudo, vetorSize);
	// funcMain (arrayConteudo, vetorSize, media);
  
  return 0;
}
