/*Nome: Victor H. Bértoli da Silva.
Matricula: 11721EBI015*/

#include <stdio.h>

int main()
{
	int estado =0, i=0, rest = 0;
	char bits[256];
	printf("Digite a sequencia a ser analisada: ");
	scanf("%s", bits);
	while(bits[i] != '\0'){
		if(bits[i] == '0' && estado == 0)
		rest = 0;
			if(bits[i] == '1' && estado == 0)
			rest = 1;
				if(bits[i] == '0' && estado == 1)
				rest = 2;
					if(bits[i] == '1' && estado == 1)
					rest = 0;
						if(bits[i] == '0' && estado == 2)
						rest = 1;
							if(bits[i] == '1' && estado == 2)
							rest = 2;
		estado = rest;
		rest = 0;
		i++;
	}
	printf("\nSequencia original: %s", bits);
	if(estado == 0)
		printf("\nE multiplo de 3.");
	else
		printf("\nNao e multiplo de 3.");
	return 0;
}