//Victor Henrique Bértoli da Silva - 11721EBI015

#include <stdio.h>

int main(){
	char num[256];
	int n = 0, i;
	printf("Digite uma string: ");
	scanf("%s", num);
	for(i=0; num[i]!='\0'; i++){
		if(num[i] >= '0' && num[i]<= '9'){
			n = n*10 + (num[i] - '0');
		}
	}
	printf("\n%d\n", n);
	return 0;
}
