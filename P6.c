/*
VICTOR HENRIQUE BÉRTOLI DA SILVA
11721EBI015
*/

#include <stdio.h>

int Soma (int *pi, int *pf)      //pi = posição inicial e pf = posição final
{
	return (*pf) + ((pf==pi) ? 0 : Soma(pi, pf-1));
}

float Divisao (int Total, int Tamanho)
{
	return Total / Tamanho;
}

int main ()
{
	int i, k, vet[20], soma;
	int *p_i, *p_f;
	float media;
	for (i=0; i<20; i++)
	vet[i]=0;
	do{
	printf ("Insira a quantidade de numeros do vetor, entre 5 e 20: ");
	scanf ("%d", &k);
	printf ("\n");} while (k<5 || k>20);
	for (i=0; i<k; i++)
	{
	printf ("Insira o numero da posicao %d: " , i+1);
	scanf ("%d", &vet[i]);
	}
	p_i = vet;
	p_f = vet+k-1;
	soma = Soma (p_i, p_f);
	media = Divisao (soma, k);
	printf ("A media eh: %.0f", media);
	return 0;
}