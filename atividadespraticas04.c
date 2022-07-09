#include <stdio.h>


int main(){
int vet[100], i;
	
	for (i = 0; i < 100 ; i++) {
	
	vet[i]= 2 * i + 1;
	
	// printf("valores do vetor [%d]: %d\n", i, vet[i]);	 		
	}
	
	for (i = 0; i <=10 ; i++){
		printf("Valor [%d]: %d\n", i, vet[i]);
	}
}
