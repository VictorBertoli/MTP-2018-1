//Victor Henrique Bértoli da Silva - 11721EBI015

#include <stdio.h>

int i1, i2;

void doInpt(int s){
	printf("Digite um numero: ");
	scanf("%d", &i1);
	if(s==2){
		printf("Digite outro numero: ");
		scanf("%d", &i2);
	}
}

char *int2bin(int n, char *s) {
    int nbits = sizeof(n) * 8; 
    s[nbits] = '\0';
    unsigned int u = *(unsigned int*)&n;
    int i;
    unsigned int mask = 1 << (nbits-1);
    for (i = 0; i < nbits; i++, mask >>= 1)
        s[i] = ((u & mask) != 0) + '0';
    return s;
}

int main(){
	int opt=-1, running=1;
	while(running==1){
		char bin1[33], bin2[33], binr[33];
		while(opt<1 || opt>7){
			printf("Calculadora de operacoes bitwise.\n\nEscolha uma operacao:");
			printf("\n1- NOT\n2- AND\n3- OR\n4- XOR\n5- Right Shift\n6- Left Shift\n7- Sair\n");
			scanf("%d", &opt);
		}
		switch(opt){
			case 1:
				doInpt(1);
				printf("\nNOT %d(%s) : %d(%s)", i1, int2bin(i1, bin1), ~i1, int2bin(~i1, binr));
				break;
			case 2:
				doInpt(2);
				printf("\n%d(%s) AND %d(%s) : %d(%s)", i1, int2bin(i1, bin1), i2, int2bin(i2, bin2), i1&i2, int2bin(i1&i2, binr));
				break;
			case 3:
				doInpt(2);
				printf("\n%d(%s) OR %d(%s) : %d(%s)", i1, int2bin(i1, bin1), i2, int2bin(i2, bin2), i1|i2, int2bin(i1|i2, binr));
				break;
			case 4:
				doInpt(2);
				printf("\n%d(%s) XOR %d(%s) : %d(%s)", i1, int2bin(i1, bin1), i2, int2bin(i2, bin2), i1^i2, int2bin(i1^i2, binr));
				break;
			case 5:
				doInpt(2);
				printf("\n%d(%s) >> %d(%s) : %d(%s)", i1, int2bin(i1, bin1), i2, int2bin(i2, bin2), i1>>i2, int2bin(i1>>i2, binr));
				break;
			case 6:
				doInpt(2);
				printf("\n%d(%s) << %d(%s) : %d(%s)", i1, int2bin(i1, bin1), i2, int2bin(i2, bin2), i1<<i2, int2bin(i1<<i2, binr));
				break;
			case 7:
				running = 0;
				break;
		}
		opt=-1;
	}
	return 0;
}