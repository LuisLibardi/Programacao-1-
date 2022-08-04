#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[3], i, soma=0;
	
	for (i = 0; i < 3; i++){
	printf("Digite o valor:");
	scanf("%d", &vet[i]);
}
	for (i = 0; i < 3; i++){
	soma = soma + vet[i];
}
	printf("Media: %d\n", soma/3);
}
	

-----------------------------------------------------------------
  
  #include <stdio.h>
#include <stdlib.h>

int main(){
	int *vet, i, *soma;
	
	vet = malloc(3*sizeof(int));
	soma = malloc(sizeof(int));
	
	*soma = 0;
	
	for (i = 0; i < 3; i++){
	printf("Digite o valor:");
	scanf("%d", &vet[i]);
}
	for (i = 0; i < 3; i++){
	*soma = *soma + vet[i];
}
	printf("Media: %d\n", *soma/3);
}
	

