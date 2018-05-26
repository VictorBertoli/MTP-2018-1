/*
VICTOR HENRIQUE BÉRTOLI DA SILVA
11721EBI015
*/

#include <stdio.h>

int  A (int m, int n)
{
	if(m == 0){
	return n+1;}             //pelo decremento do m quando m != 0, este if é sempre o laço final da função.
	else if(m>0 && n==0){
	A(m-1, 1);}
	else if(m>0 && n>0){
	A(m - 1, A(m, n - 1));}
}

int main ()
{
	int m, n;
	printf("Insira valores para m e n, respectivamente: \n");
	scanf("%d %d", &m, &n);
	printf("Resultado: %d" ,A (m, n));
	return 0;
}