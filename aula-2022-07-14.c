#include <stdio.h>
#include <stdlib.h>

int main(){

	int num, flag, i, vet[50], pos;
	for (i = 0; i < 50; i++)
		vet[i] = rand()%100;
		
	for ( pos = 0; pos < 50; pos++)
	{
		flag = 0;

		for (i = 2; i < num-1 ; i++){
			if(vet[pos] % i == 0)
				flag = 1;
		}
		if (flag == 0)
			printf("pos %d: %d é primo\n", pos, vet[pos]);
	}
}
	
